namespace dz_31_01_
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.elixirsListBox = new System.Windows.Forms.ListBox();
            this.SuspendLayout();
            // 
            // elixirsListBox
            // 
            this.elixirsListBox.FormattingEnabled = true;
            this.elixirsListBox.ItemHeight = 16;
            this.elixirsListBox.Location = new System.Drawing.Point(12, 12);
            this.elixirsListBox.Name = "elixirsListBox";
            this.elixirsListBox.Size = new System.Drawing.Size(225, 244);
            this.elixirsListBox.TabIndex = 0;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(602, 253);
            this.Controls.Add(this.batchNumberLabel);
            this.Controls.Add(this.productionDateLabel);
            this.Controls.Add(this.manufacturerLabel);
            this.Controls.Add(this.descriptionTextBox);
            this.Controls.Add(this.elixirsListBox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        #endregion

        private System.Windows.Forms.ListBox elixirsListBox;
        private System.Windows.Forms.TextBox descriptionTextBox;
        private System.Windows.Forms.Label manufacturerLabel;
        private System.Windows.Forms.Label productionDateLabel;
        private System.Windows.Forms.Label batchNumberLabel;
    }
}
