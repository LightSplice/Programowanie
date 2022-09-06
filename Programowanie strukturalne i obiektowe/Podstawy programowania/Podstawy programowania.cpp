// To jest komentarz jednolinijkowy.
//Dwa znaki "//" oznaczają, że od tego momentu do końca linii wszystkie znaki są komentarzem.

//Komentarz – fragment kodu źródłowego, którego jedynym celem istnienia jest 
//informowanie o czymś osoby czytającej źródła, a który nie ma żadnego wpływu na program 
//- i jest zazwyczaj przez kompilator czy też interpreter pomijany.

/*
To jest komentarz wielolinijkowy.
Taki komentarz ma znak otwierający i zamykający. Wszystko co jest pomiedzy nimi jest traktowane jako komentarz.
*/

#include <iostream>

/*
Zadanie 1
Program pyta o cenę netto zakupów i wylicza cene brutto.
*/
void Zadanie1()
{
    float cenaNetto;
    int procentPodatku;
    float cenaBrutto;
    std::cout << "Podaj cenę netto:\n";
    std::cin >> cenaNetto;
    std::cout << "Podaj procent podatku (sama liczba bez znaku %):\n";
    std::cin >> procentPodatku;
    cenaBrutto = cenaNetto * procentPodatku / 100;

    std::cout << "Cena brutto: " << cenaBrutto << "\n";

}

/*
Zadanie 2
Procent bankowy. Podajemy kwotę, oprocentowanie roczne i ilość lat.
Program wylicza kwotę po upływie podanych lat.
*/
void Zadanie2()
{
    float kwotaPoczatkowa;
    int oprocentowanieRoczne;
    int iloscLat;
    float ostatecznaKwota;
    std::cout << "Podaj kwote początkową:\n";
    std::cin >> kwotaPoczatkowa;
    std::cout << "Podaj oprocentowanie roczne (sama liczba bez znaku %):\n";
    std::cin >> oprocentowanieRoczne;
    std::cout << "Podaj ilość lat:\n";
    std::cin >> iloscLat;
    ostatecznaKwota = kwotaPoczatkowa + kwotaPoczatkowa * oprocentowanieRoczne / 100 * iloscLat;

    std::cout << "Ostateczna kwota: " << ostatecznaKwota << "\n";

}



int main()
{
    /* Infrukcja do wyświetlania informacji na standardowy strumień wyjści.
    Domyślnie, jesli nie zostało to zmienione, jest to konsola w której aplikacja została uruchomiona.
    Aby wyswietlić na konsoli nalezy użyć std::cout.
    Na konosle wywyłamy za pomoca operatora <<.
    Po nim musi znajdować się dana do wysłania.
    Instrukcję kończymy znakiem średnik.

    "Hello World!\n" - jest to stała o wartości tekstowej.
    Stałe tekstowe są ograniczone znakami cudzysłowu:
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzysłów) - jesli jest zero lub więcej znaków
    
    W stałych tekstowych moga być wstawiane znaki specjalne. Takie znaki zaczynają się od znaku \ (backslash) po którym może się znajdować:
    * jedna litera alfabetu angielskiego
    * trzy cyfry dające liczbę ósemkową
    Przykładowo:
    * \n - symbol oznaczający nową linię.
    * \t - symbol oznaczający znak tabulatora
    * \\ - symbol oznaczający znak \
    * \' - symbol oznaczający znak '
    * \" - symbol oznaczający znak "
    * \141 - symbol ósemkowy oznaczajacy zgodnie z tablicą kodów ASCII znak młaej literki a
    */
    std::cout << "Hello\nWorld!\n";
    std::cout << "Hello World!\n";

    /*
    56 - stała liczbowa
    Stałe liczowe mogą składać się tylko z:
    * cyfr arabskich: 0,1,2,3,4,5,6,7,8,9
    * znaku + lub - znajdującego się na początku wartości ozaczający znak liczby
    * znaku . (kropka) oznaczający granicę pomiędzy częścią całkowitą a rzeczywistą
    */
    std::cout << 56;
    std::cout << "\n";

    /* Jeśli występuje potrzeba wyświetlenia dwóch lub więcej wartości można kontynuować instrukcję 
    ale te wartości nalezy rozdzielić znakiem <<.
    */
    std::cout << 56 << "\n";

    /*
    Zmienna – konstrukcja programistyczna posiadająca trzy podstawowe atrybuty: 
    symboliczną nazwę, miejsce przechowywania i wartość; 
    pozwalająca w kodzie źródłowym odwoływać się przy pomocy nazwy do wartości lub miejsca przechowywania. 
    Nazwa służy do identyfikowania zmiennej w związku z tym często nazywana jest identyfikatorem. 
    Miejsce przechowywania przeważnie znajduje się w pamięci komputera i określane jest przez adres i długość danych. 
    Wartość to zawartość miejsca przechowywania. 
    Zmienna zazwyczaj posiada również czwarty atrybut: typ, określający rodzaj danych przechowywanych w zmiennej 
    i co za tym idzie sposób reprezentacji wartości w miejscu przechowywania. W programie wartość zmiennej może być 
    odczytywana lub zastępowana nową wartością, tak więc wartość zmiennej może zmieniać się w trakcie wykonywania programu, 
    natomiast dwa pierwsze atrybuty (nazwa i miejsce przechowywania) nie zmieniają się w trakcie istnienia zmiennej.

    Aby wykorzystać zmienne należy je zadeklarować.
    Deklaracja zmiennej w jezyku C++:
    typ_zmiennej nazwa_zmiennej;

    typ_zmiennej - jest to informacja co będziemy przechowywać w zmiennej.
    Przykładowe typy zmiennych:
    * int - typ liczbowy całkowity; zajmuje cztery bajty w pamięci i pozwala przechować wartości od -2 147 483 648 do 2 147 483 647
    * short - typ liczbowy całkowity; zajmuje dwa bajty i pozwala przechować wartości	od -32 768 do 32 767
    * float	- typ liczbowy rzeczywisty; zajmuje cztery bajty i pozwala przechować wartości 3.4E +/- 38 (7 cyfr)
    * bool - typ logiczny; zajmuje jeden bajt i pozwala przechować wartości	false lub true
    
    Nazwa zmiennej musi być poprawnym identyfikatorem:
    * dozwolone znaki: alfabet angielski a-z oraz A-Z, cyfry arabskie 0-9, podkreślenie _
    * pierwszym znakiem nie może być cyfra
    * nie może być to słowo kluczowe języka
    * musi być uniklana w swojej widoczności (wytłumaczone jest to w trakcie nauki)
    */

    /*
    Deklaracja zmiennej typu całkowitoliczbowego INT o identyfikatorze (nazwie) "liczba"
    */
    int liczba;
    std::cout << "Podaj liczbe: \n";
    /*
    Aby poprać dane ze standardowego strumienia wejścia (najczęściej z konsoli w której został uruchomiony program)
    nalezy użyć std::cin. Do pobrania danej uzywamy operatora >> po którym nalezy podać nazwę zmiennej do
    której zostanie zapisana dana.
    */
    std::cin >> liczba;
    std::cout << "Podales " << liczba << '\n';

    float liczba_2;
    std::cout << "Podaj liczbe: \n";
    std::cin >> liczba_2;
    std::cout << "Podales " << liczba_2 << '\n';

    float wynik;

    /*
    Do operacji arytmetycznych na typach liczbowych storujemy operatory:
    + (operator dodawania)
    - (operator odejmowania)
    * (operator mnożenia)
    / (operator dzielenia)
    Są to operatory binarne, czyli do swojego działania potrzebóją dwóch wartości. Wartości te muszą się znajdować po stronie lewej i prawej
    tego operatora. Operator po wykonaniu dzialania zwraca wartość.
    Operatory te mają swoje przyjorytety.  Priorytety oznaczają które operacje wykonają się wcześniej. Jeśli dwa operatory z takimi samymi
    priorytetami znajdują się obok siebie to wykonywane są one od lewej do prawej.
    Operatory * i / mają te same priorytety.
    Operatory + i - mają te same priorytety ale mniejsze niż * i /.

    Operator = ma najniższy priorytet. Jest on binarny i służy do zapisu wartości znajdującej się po lewej stronie do ZMIENNEJ znajdującej się\
    po lewej stronie.
    */
    wynik = liczba + liczba_2;
    std::cout << "Suma: " << wynik << "\n";

    wynik = liczba - liczba_2;
    std::cout << "Roznica: " << wynik << "\n";

    wynik = liczba * liczba_2;
    std::cout << "Iloczyn: " << wynik << "\n";

    wynik = liczba / liczba_2;
    std::cout << "Iloraz: " << wynik << "\n";

    //9 + 7 / 2 = 12 
    //9.0 + 7 / 2 = 12.0 
    //9 + 7 / 2.0 = 12.5

    std::cout << "----------------------------------------\n";
    /*
    Pobierz od uzytkownika długości boków prostokąta i wyświetlić
    pole oraz obwód tego prostokąta.
    */
}