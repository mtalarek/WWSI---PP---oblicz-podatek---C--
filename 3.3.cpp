#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double dochod, podatek, prog1 = 74048, prog2 = 37024;
    cout << "Podaj dochod po odliczeniach: ";
    cin >> dochod;
    if(dochod > prog1) {
        podatek = 17648.44 + ((dochod - prog1) * 0.4);
        cout << setprecision(2) << fixed << "podatek: " << podatek;}
    else if(dochod > prog2) {
        podatek = 6541.24 + ((dochod - prog2) * 0.3);
        cout << "podatek: " << podatek;}
    else {
        podatek = dochod * 0.19 -493.32;
        cout << "podatek: " << podatek;}
}




