#include <iostream>
using namespace std;

int n, ogl;
int main()
{
    cin >> n;
    while (n != 0)
        {
            ogl = ogl * 10 + n % 10; // se inverseaza cifra cu cifra numarul
            n = n / 10; // se taie pe rand cifrele numarului
        }
    // se afiseaza oglinditul lui n
    cout << ogl;
    return 0;
}
