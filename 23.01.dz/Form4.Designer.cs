namespace dz_23_01
{
    partial class Form4
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
            this.changeStyleButton = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // changeStyleButton
            // 
            this.changeStyleButton.Location = new System.Drawing.Point(514, 317);
            this.changeStyleButton.Name = "changeStyleButton";
            this.changeStyleButton.Size = new System.Drawing.Size(190, 87);
            this.changeStyleButton.TabIndex = 0;
            this.changeStyleButton.Text = "Поменять стиль";
            this.changeStyleButton.UseVisualStyleBackColor = true;
            this.changeStyleButton.Click += new System.EventHandler(this.changeStyleButton_Click);
            // 
            // Form4
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.changeStyleButton);
            this.Name = "Form4";
            this.Text = "Form4";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button ChangeColorButton;
        private System.Windows.Forms.Button changeStyleButton;
    }
}