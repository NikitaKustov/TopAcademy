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

//задание 2
namespace dz_23_01
{
    public partial class Form2 : Form
    {
        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern IntPtr FindWindow(string lpClassName, string lpWindowName);

        [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        public static extern IntPtr SendMessage(IntPtr hWnd, uint Msg, IntPtr wParam, StringBuilder lParam);

        [DllImport("user32.dll", SetLastError = true, CharSet = CharSet.Auto)]
        static extern IntPtr SendMessage(IntPtr hWnd, uint Msg, IntPtr wParam, IntPtr lParam);

        private const int WM_SETTEXT = 0x000C;
        private const int WM_CLOSE = 0x0010;

        public Form2()
        {
            InitializeComponent();
        }


        private void Form2_Load(object sender, EventArgs e)
        {

        }

        private void EX3_Click(object sender, EventArgs e)
        {
            Form3 form3 = new Form3();
            form3.ShowDialog();
        }

        private void findWindows_Click(object sender, EventArgs e)
        {
            string windowTitle = windowTitleTextBox.Text; 
            IntPtr windowHandle = FindWindow(null, windowTitle);

            if (windowHandle == IntPtr.Zero)
            {
                MessageBox.Show("Окно не найдено!");
                return;
            }
            ChangeWindows.Enabled= true;
            CloseWindows.Enabled = true;
        }

        private void ChangeWindows_Click(object sender, EventArgs e)
        {
            string windowTitle = windowTitleTextBox.Text; 
            IntPtr windowHandle = FindWindow(null, windowTitle);

            if (windowHandle == IntPtr.Zero)
            {
                MessageBox.Show("Окно не найдено!");
                return;
            }
            string newTitle = newTitleTextBox.Text;
            StringBuilder str = new StringBuilder(newTitle);
            SendMessage(windowHandle, WM_SETTEXT, IntPtr.Zero, str);
        }

        private void CloseWindows_Click(object sender, EventArgs e)
        {
            string windowTitle = windowTitleTextBox.Text; 
            IntPtr windowHandle = FindWindow(null, windowTitle);
            if (windowHandle == IntPtr.Zero)
            {
                MessageBox.Show("Окно не найдено!");
                return;
            }
            SendMessage(windowHandle, WM_CLOSE, IntPtr.Zero, IntPtr.Zero);
        }
    }
}