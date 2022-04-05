#include <iostream>
using namespace std;

int NWD(int a, int b)
{
    int nww;
    int ilo;
    ilo = a * b;
    while (a != b)
        if (a > b)
            a = a - b; 
        else
            b = b - a;
    nww = ilo / a;
    return a;

}

int main()
{
    int nww;
    int a;
    int b;


    int ilo;
    

    cout << "Podaj pierwsza liczbe : ";
    cin >> a;
    cout << "Podaj druga liczbe : ";
    cin >> b;

    ilo = a * b;
    nww = ilo / NWD(a, b);

    cout << "Najmniejsza wspolna wielokrotnosc " << a << " i " << b << " to " << nww << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Najwiekszy wspolny dzielnik " << a << " i " << b << " to " << NWD(a, b) << endl;
    return 0;
}