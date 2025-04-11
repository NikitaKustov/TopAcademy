using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace dz_23_01
{
    public partial class Form4 : Form
    {
        [DllImport("user32.dll", SetLastError = true)]
        static extern IntPtr FindWindow(string lpClassName, string lpWindowName);

        [DllImport("user32.dll", SetLastError = true)]
        static extern IntPtr FindWindowEx(IntPtr hwndParent, IntPtr hwndChildAfter, string lpszClass, string lpszWindow);

        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        static extern IntPtr SendMessage(IntPtr hWnd, uint Msg, IntPtr wParam, IntPtr lParam);

        private const uint WM_SETFONT = 0x0030;
        public TextBox InputTextBox { get; private set; }
        public Button ChangeColorButtons { get; private set; }
        public Form4()
        {
            InitializeComponent();
            InputTextBox = new TextBox();
            InputTextBox.Location = new Point(10, 10);
            InputTextBox.Size = new Size(200, 25);
            Controls.Add(InputTextBox);

            ChangeColorButtons = new Button();
            ChangeColorButtons.Location = new Point(10, 50);
            ChangeColorButtons.Size = new Size(100, 30);
            ChangeColorButtons.Text = "Change Color";
            Controls.Add(ChangeColorButtons);
        }

        private void changeStyleButton_Click(object sender, EventArgs e)
        {
            IntPtr windowHandle = FindWindow(null, "Windowed App"); 

            if (windowHandle == IntPtr.Zero)
            {
                MessageBox.Show("Первое приложение не найдено!");
                return;
            }

            // Находим текстовое поле
            IntPtr textBoxHandle = FindWindowEx(windowHandle, IntPtr.Zero, "Edit", null);

            if (textBoxHandle == IntPtr.Zero)
            {
                MessageBox.Show("Текстовое поле не найдено!");
                return;
            }
            IntPtr buttonHandle = FindWindowEx(windowHandle, IntPtr.Zero, "Button", "Change Color"); 

            if (buttonHandle == IntPtr.Zero)
            {
                MessageBox.Show("Кнопка не найдена!");
                return;
            }

            SetControlFont(textBoxHandle, new Font("Arial", 12, FontStyle.Bold));
        }

        private void SetControlFont(IntPtr hWnd, Font font)
        {
            IntPtr hFont = font.ToHfont();
            SendMessage(hWnd, WM_SETFONT, hFont, (IntPtr)1);
        }
    }
}