using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;

//задание 3
namespace dz_23_01
{
    public partial class Form3 : Form
    {
        [DllImport("kernel32.dll")]
        public static extern bool Beep(int frequency, int duration);
        [DllImport("user32.dll")]
        public static extern bool MessageBeep(uint uType);

        private bool _isRunning = false;
        private CancellationTokenSource _cts;

        public Form3()
        {
            InitializeComponent();
        }

        private void EX4_Click(object sender, EventArgs e)
        {

        }

        private async void Startbutton_Click(object sender, EventArgs e)
        {
            if (_isRunning)
            {
                StopSignals();
                return;
            }

            _isRunning = true;
            Startbutton.Text = "Stop";
            int frequency = (int)frequencyNumericUpDown.Value;
            int duration = (int)durationNumericUpDown.Value;
            int interval = (int)intervalNumericUpDown.Value;
            SoundType soundType = (SoundType)soundTypeComboBox.SelectedItem;

            _cts = new CancellationTokenSource();

            try
            {
                while (!_cts.Token.IsCancellationRequested)
                {
                    if (soundType == SoundType.SimpleBeep)
                    {
                        Beep(frequency, duration);
                    }
                    else
                    {
                        MessageBeep((uint)soundType);
                    }

                    await Task.Delay(interval, _cts.Token);
                }
            }
            catch (TaskCanceledException)
            {
                // Обработка отмены задачи
            }
            finally
            {
                StopSignals();
            }
        }

        private void StopSignals()
        {
            _isRunning = false;
            Startbutton.Text = "Start";

            if (_cts != null)
            {
                _cts.Cancel();
                _cts.Dispose();
                _cts = null;
            }
        }

        private void Form3_Load(object sender, EventArgs e)
        {
            soundTypeComboBox.DataSource = Enum.GetValues(typeof(SoundType));
            soundTypeComboBox.SelectedItem = SoundType.SimpleBeep;
        }
        public enum SoundType{ SimpleBeep, Asterisk, Exclamation, Hand, Question, Ok,}
    }
}