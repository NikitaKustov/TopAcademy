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
    //задание 1
    public partial class Form1 : Form
    {
        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern int MessageBox(IntPtr hWnd, string text, string caption, int options);

        public Form1()
        {
            InitializeComponent();
        }

        private void showInfoButton_Click(object sender, EventArgs e)
        {
            string name = "Сайфутдинова Алиса";
            string age = "18";
            string bd = "08.08.2006";
            string occupation = "Программист";
            string university = "КГЭУ";
            MessageBox(IntPtr.Zero, "Имя: " + name, "Моя информация", 0);
            MessageBox(IntPtr.Zero, "Возраст: " + age, "Моя информация", 0);
            MessageBox(IntPtr.Zero, "Дата рождения: " + bd, "Моя информация", 0);
            MessageBox(IntPtr.Zero, "Род деятельности: " + occupation, "Моя информация", 0);
            MessageBox(IntPtr.Zero, "Университет: " + university, "Моя информация", 0);
            MessageBox(IntPtr.Zero, "Это все, что я хотела рассказать!", "Моя информация", 0);
        }

        private void EX2_Click(object sender, EventArgs e)
        {
            Form2 form2 = new Form2();
            form2.ShowDialog();
        }
    }
}