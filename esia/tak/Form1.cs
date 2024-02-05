namespace tak
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Tekst_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void Zatwierdz_Click(object sender, EventArgs e)
        {
            string email2 = email.Text;
            string firstPass = haslo.Text;
            string secondPass = haslo2.Text;
            bool checkEmail = email.Contains("@");

            if (checkEmail == false)
            {
                hint.Text = "nieprawidlowy adres e-mail";
            }
            if (firstPass != secondPass)
            {
                hint.Text = "Hasla sie roznia";
            }
            if (checkEmail == true && firstPass == secondPass)
            {
                hint.Text = "Witaj " + email2;
            }
        }

        private void haslo_TextChanged(object sender, EventArgs e)
        {

        }
    }
}