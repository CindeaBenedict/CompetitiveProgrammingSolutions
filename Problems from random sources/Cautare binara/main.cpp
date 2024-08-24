#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int a[100],i,n,mij;
   ///* CITIM ELEMENTELE VECTORULUI
   cin>>n;
   for(i=1;i<=n;i++)
      cin>>a[i];
   ///* NE ASIGURAM CA VECTORUL ESTE ORDONAT CRESCATOR
    sort(a+1,a+n+1);
    cout<<"vectorul este sortat:  ";
    for(i=1;i<=n;i++) cout<<a[i]<<" ";


    int val;///** VALOAREA PE CARE O CAUT BINAR
    cout<<"val=";
    cin>>val;
    int li=1,ls=n;
    bool gasit=false;
    ///CAUTAREA BINARA
    while(li<=ls)
    {
        mij=(li+ls)/2;
        if(a[mij]==val)
        {   gasit=true;
            cout<<"am gasit ce am cautat!!! pe pozitia"<<mij;
            break;
        }
        else
          if(a[mij]>val) ls=mij-1;
          else li=mij+1;
    }

    if(gasit==false) cout<<"nu am gasit valoarea cautat in vector";

    return 0;
}
