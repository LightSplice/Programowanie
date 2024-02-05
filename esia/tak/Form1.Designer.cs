namespace tak
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            Tekst = new Label();
            Podaj_email = new Label();
            Podaj_haslo = new Label();
            Powtorz_haslo = new Label();
            email = new TextBox();
            haslo = new TextBox();
            haslo2 = new TextBox();
            Zatwierdz = new Button();
            hint = new Label();
            SuspendLayout();
            // 
            // Tekst
            // 
            Tekst.BackColor = Color.DarkSeaGreen;
            Tekst.Dock = DockStyle.Top;
            Tekst.Font = new Font("Segoe UI", 45F, FontStyle.Regular, GraphicsUnit.Point);
            Tekst.Location = new Point(0, 0);
            Tekst.Name = "Tekst";
            Tekst.Size = new Size(538, 81);
            Tekst.TabIndex = 0;
            Tekst.Text = "Rejestruj konto";
            Tekst.TextAlign = ContentAlignment.TopCenter;
            Tekst.Click += Tekst_Click;
            // 
            // Podaj_email
            // 
            Podaj_email.AutoSize = true;
            Podaj_email.Font = new Font("Segoe UI", 22F, FontStyle.Regular, GraphicsUnit.Point);
            Podaj_email.Location = new Point(12, 96);
            Podaj_email.Name = "Podaj_email";
            Podaj_email.Size = new Size(190, 41);
            Podaj_email.TabIndex = 1;
            Podaj_email.Text = "Podaj e-mail:";
            // 
            // Podaj_haslo
            // 
            Podaj_haslo.AutoSize = true;
            Podaj_haslo.Font = new Font("Segoe UI", 22F, FontStyle.Regular, GraphicsUnit.Point);
            Podaj_haslo.Location = new Point(12, 221);
            Podaj_haslo.Name = "Podaj_haslo";
            Podaj_haslo.Size = new Size(178, 41);
            Podaj_haslo.TabIndex = 2;
            Podaj_haslo.Text = "Podaj hasło:";
            // 
            // Powtorz_haslo
            // 
            Powtorz_haslo.AutoSize = true;
            Powtorz_haslo.Font = new Font("Segoe UI", 22F, FontStyle.Regular, GraphicsUnit.Point);
            Powtorz_haslo.Location = new Point(12, 360);
            Powtorz_haslo.Name = "Powtorz_haslo";
            Powtorz_haslo.Size = new Size(212, 41);
            Powtorz_haslo.TabIndex = 3;
            Powtorz_haslo.Text = "Powtórz hasło:";
            // 
            // email
            // 
            email.Location = new Point(12, 163);
            email.Name = "email";
            email.Size = new Size(286, 23);
            email.TabIndex = 4;
            email.TextChanged += textBox1_TextChanged;
            // 
            // haslo
            // 
            haslo.Location = new Point(12, 304);
            haslo.Name = "haslo";
            haslo.Size = new Size(286, 23);
            haslo.TabIndex = 5;
            haslo.UseSystemPasswordChar = true;
            haslo.TextChanged += haslo_TextChanged;
            // 
            // haslo2
            // 
            haslo2.Location = new Point(12, 433);
            haslo2.Name = "haslo2";
            haslo2.Size = new Size(286, 23);
            haslo2.TabIndex = 6;
            haslo2.UseSystemPasswordChar = true;
            // 
            // Zatwierdz
            // 
            Zatwierdz.Font = new Font("Segoe UI", 18F, FontStyle.Regular, GraphicsUnit.Point);
            Zatwierdz.Location = new Point(185, 507);
            Zatwierdz.Name = "Zatwierdz";
            Zatwierdz.Size = new Size(135, 41);
            Zatwierdz.TabIndex = 7;
            Zatwierdz.Text = "Zatwierdź";
            Zatwierdz.UseVisualStyleBackColor = true;
            Zatwierdz.Click += Zatwierdz_Click;
            // 
            // hint
            // 
            hint.AutoSize = true;
            hint.Font = new Font("Segoe UI", 12F, FontStyle.Regular, GraphicsUnit.Point);
            hint.Location = new Point(227, 566);
            hint.Name = "hint";
            hint.Size = new Size(52, 21);
            hint.TabIndex = 8;
            hint.Text = "label1";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(538, 670);
            Controls.Add(hint);
            Controls.Add(Zatwierdz);
            Controls.Add(haslo2);
            Controls.Add(haslo);
            Controls.Add(email);
            Controls.Add(Powtorz_haslo);
            Controls.Add(Podaj_haslo);
            Controls.Add(Podaj_email);
            Controls.Add(Tekst);
            Name = "Form1";
            Text = "Form1";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label Tekst;
        private Label Podaj_email;
        private Label Podaj_haslo;
        private Label Powtorz_haslo;
        private TextBox email;
        private TextBox haslo;
        private TextBox haslo2;
        private Button Zatwierdz;
        private Label hint;
    }
}