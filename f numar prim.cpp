#include <iostream>
using namespace std;

int n,d,nr;
int main()
{
cin>>n;
//se determina daca numarul are divizori proprii
  for(d=2;d<=n/2;d++)
    {//d este initalizat cu 2 (primul divizor propriu posibil)
    //instructiunea merge pana la n/2 deoarece nu pot exista divizori proprii intre n/2 si n
    if(n%d==0) { //conditia ca d sa fie divizor propriu al lui d
        nr++;
    }
    }
if(nr==0)
    cout<<"Numarul este prim";
else
    cout<<"Numarul nu este prim";
return 0;
}
