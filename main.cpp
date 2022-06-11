#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    srand(time(NULL));
    int ile;
    string haslo;
    int dlugosc;
    cout << "Ile chcesz hasel: " << endl;
    cin >> ile;
    cout << "Jaka ma byc dlugosc hasla: " << endl;
    cin >> dlugosc;
    ofstream plik;
    plik.open("haslo.txt");
    if(!plik)
    {
        cerr<< "blad";
    }
    string tab = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM123456789!@#$%&";

    for(int i=0; i<ile; i++)
    {
        for(int j=0; j<dlugosc; j++)
        {
            char znak = tab[rand() % 70];
            haslo += znak;
        }
        cout << haslo << endl;
        plik << haslo << endl;
        haslo = "";
    }
    plik.close();
    return 0;
}
