#include <iostream>
using namespace std;

int a,b;
int main()
{
    cin>>a>>b;
    //se determina cel mai mic divizor comun prin scaderi repetate
    if(a!=0 && b!=0) {
        while(a!=b)
        {
            if(a>b) {
                a=a-b;
            }
            else {
                b=b-a;
            }
        }
        //se afiseaza a (care memoreaza acum cmmdc-ul dintre cele 2 numere)
        cout<<a;
    }
    else {
        cout<<"Nu exista";
    }
}
