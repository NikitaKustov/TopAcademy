namespace dz_23_01
{
    partial class Form2
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.EX3 = new System.Windows.Forms.Button();
            this.findWindows = new System.Windows.Forms.Button();
            this.CloseWindows = new System.Windows.Forms.Button();
            this.ChangeWindows = new System.Windows.Forms.Button();
            this.windowTitleTextBox = new System.Windows.Forms.TextBox();
            this.newTitleTextBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // EX3
            // 
            this.EX3.Location = new System.Drawing.Point(529, 313);
            this.EX3.Name = "EX3";
            this.EX3.Size = new System.Drawing.Size(252, 123);
            this.EX3.TabIndex = 0;
            this.EX3.Text = "перейти к заданию 3";
            this.EX3.UseVisualStyleBackColor = true;
            this.EX3.Click += new System.EventHandler(this.EX3_Click);
            // 
            // findWindows
            // 
            this.findWindows.Location = new System.Drawing.Point(12, 12);
            this.findWindows.Name = "findWindows";
            this.findWindows.Size = new System.Drawing.Size(184, 68);
            this.findWindows.TabIndex = 1;
            this.findWindows.Text = "показать окно";
            this.findWindows.UseVisualStyleBackColor = true;
            this.findWindows.Click += new System.EventHandler(this.findWindows_Click);
            // 
            // CloseWindows
            // 
            this.CloseWindows.Location = new System.Drawing.Point(418, 12);
            this.CloseWindows.Name = "CloseWindows";
            this.CloseWindows.Size = new System.Drawing.Size(184, 68);
            this.CloseWindows.TabIndex = 2;
            this.CloseWindows.Text = "закрыть окно";
            this.CloseWindows.UseVisualStyleBackColor = true;
            this.CloseWindows.Click += new System.EventHandler(this.CloseWindows_Click);
            // 
            // ChangeWindows
            // 
            this.ChangeWindows.Location = new System.Drawing.Point(214, 12);
            this.ChangeWindows.Name = "ChangeWindows";
            this.ChangeWindows.Size = new System.Drawing.Size(184, 68);
            this.ChangeWindows.TabIndex = 3;
            this.ChangeWindows.Text = "поменять заголовок";
            this.ChangeWindows.UseVisualStyleBackColor = true;
            this.ChangeWindows.Click += new System.EventHandler(this.ChangeWindows_Click);
            // 
            // windowTitleTextBox
            // 
            this.windowTitleTextBox.Location = new System.Drawing.Point(12, 112);
            this.windowTitleTextBox.Name = "windowTitleTextBox";
            this.windowTitleTextBox.Size = new System.Drawing.Size(431, 22);
            this.windowTitleTextBox.TabIndex = 4;
            // 
            // newTitleTextBox
            // 
            this.newTitleTextBox.Location = new System.Drawing.Point(12, 167);
            this.newTitleTextBox.Name = "newTitleTextBox";
            this.newTitleTextBox.Size = new System.Drawing.Size(431, 22);
            this.newTitleTextBox.TabIndex = 5;
            // 
            // Form2
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.newTitleTextBox);
            this.Controls.Add(this.windowTitleTextBox);
            this.Controls.Add(this.ChangeWindows);
            this.Controls.Add(this.CloseWindows);
            this.Controls.Add(this.findWindows);
            this.Controls.Add(this.EX3);
            this.Name = "Form2";
            this.Text = "Form2";
            this.Load += new System.EventHandler(this.Form2_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button EX3;
        private System.Windows.Forms.Button findWindows;
        private System.Windows.Forms.Button CloseWindows;
        private System.Windows.Forms.Button ChangeWindows;
        private System.Windows.Forms.TextBox windowTitleTextBox;
        private System.Windows.Forms.TextBox newTitleTextBox;
    }
}