#include <iostream>
using namespace std;

int n, ogl, copien;
int main()
{
    cin >> n;
    copien=n;
    while (n != 0)
        {
            ogl = ogl * 10 + n % 10; // se inverseaza cifra cu cifra numarul n
            n = n / 10; // se taie pe rand cifrele lui n
        }
    //testul de palindrom + afisarea mesajului corespunzator
    if(copien==ogl)
        cout<<"Numarul este palindrom";
    else
        cout<<"Numarul nu este palindrom";
    return 0;
}
