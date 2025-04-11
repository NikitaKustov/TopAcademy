namespace dz_23_01
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
            this.showInfoButton = new System.Windows.Forms.Button();
            this.EX2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // showInfoButton
            // 
            this.showInfoButton.Location = new System.Drawing.Point(48, 58);
            this.showInfoButton.Name = "showInfoButton";
            this.showInfoButton.Size = new System.Drawing.Size(180, 85);
            this.showInfoButton.TabIndex = 0;
            this.showInfoButton.Text = "показать информацию ";
            this.showInfoButton.UseVisualStyleBackColor = true;
            this.showInfoButton.Click += new System.EventHandler(this.showInfoButton_Click);
            // 
            // EX2
            // 
            this.EX2.Location = new System.Drawing.Point(530, 330);
            this.EX2.Name = "EX2";
            this.EX2.Size = new System.Drawing.Size(230, 98);
            this.EX2.TabIndex = 1;
            this.EX2.Text = " перейти к заданию 2";
            this.EX2.UseVisualStyleBackColor = true;
            this.EX2.Click += new System.EventHandler(this.EX2_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.EX2);
            this.Controls.Add(this.showInfoButton);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button showInfoButton;
        private System.Windows.Forms.Button EX2;
    }
}
