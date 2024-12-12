namespace Egzamin
{
    public partial class MainPage : ContentPage
    {
        int wynik_gry = 0;
        public MainPage()
        {
            InitializeComponent();
        }

        private void Rzut_koscmi(object sender, EventArgs e)
        {
            int[] rzut = new int[5];
            Random r = new Random();
            int wynik_losowania = 0;

            for (int i = 0; i < 5; i++)
            {
                rzut[i] = r.Next(1, 7);
            }
            rzut0.Source = "k" + rzut[0] + ".jpg"; 
            rzut1.Source = "k" + rzut[1] + ".jpg"; 
            rzut2.Source = "k" + rzut[2] + ".jpg"; 
            rzut3.Source = "k" + rzut[3] + ".jpg"; 
            rzut4.Source = "k" + rzut[4] + ".jpg"; 

            for (int j = 1; j <= 6; j++)
            {
                int liczba = 0;

                for (int k = 0; k < 5; k++)
                {
                    if (rzut[k] == j)
                    {
                        liczba++;
                    }
                }
                if (liczba > 1)
                {
                    wynik_losowania += j * liczba;
                }
                
            }
            wynik_gry += wynik_losowania;

            WynikLosTekst.Text = "Wynik tego losowania: " + wynik_losowania;
            WynikGryTekst.Text = "Wynik gry: " + wynik_gry;
        }

        private void Reset(object sender, EventArgs e)
        {
            wynik_gry = 0;
            WynikLosTekst.Text = "Wynik tego losowania: 0";
            WynikGryTekst.Text = "Wynik gry: 0";

            rzut0.Source = "question.jpg";
            rzut1.Source = "question.jpg";
            rzut2.Source = "question.jpg";
            rzut3.Source = "question.jpg";
            rzut4.Source = "question.jpg";
        }
    }

}
