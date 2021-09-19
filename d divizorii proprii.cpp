#include <iostream>
using namespace std;

int n,d;
int main()
{
    cin>>n;
    for(d=2;d<=n/2;d++) {
        if(n%d==0) { //conditia ca d sa fie divizor propriu al lui d
            cout<<d<<" "; // se afiseaza pe rand divizorii proprii ai lui n
        }
    }
    return 0;
}
