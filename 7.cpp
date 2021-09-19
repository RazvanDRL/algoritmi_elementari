#include <iostream>
#include <cmath>
using namespace std;
bool ePatrat(int numar)
{
    if((int)sqrt(numar) == sqrt(numar))
        return true;
    return false;
}
int main()
{
    int an;
    cin >> an;
    if(ePatrat(an)==true) {
        cout<<"Este numar perfect";
    } else {
        cout<<"Nu este numar perfect";
    }
    return 0;
}