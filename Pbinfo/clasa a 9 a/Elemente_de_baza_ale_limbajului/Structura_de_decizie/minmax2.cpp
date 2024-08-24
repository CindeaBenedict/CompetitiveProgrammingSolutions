#include <iostream>
using namespace std;
int main (){
    int a,b,c,numar1,numar2,min1,min2,max1,max2,mij1,mij2;
    cin>>numar1>>numar2;
    ///memoram fiecare cifra din primul numar in variabilele a,b,c (a-cifra sutelor, b-cifra zecilor, c-cifra unitatilor)
    a=numar1/100;
    b=numar1/10%10;
    c=numar1%10;
    min1=max1=a;
    if (b<min1) min1=b; ///aflam cifra minima din primul numar
    if (c<min1) min1=c;
    if (b>max1) max1=b; ///aflam cifra maxima din primul numar
    if (c>max1) max1=c;
    mij1=a+b+c-min1-max1;   ///aflam cifra din mijloc ca si valoare din primul numar
    ///repetam procesul de mai sus si cu al doilea numar
    a=numar2/100;
    b=numar2/10%10;
    c=numar2%10;
    min2=max2=a;
    if (b<min2) min2=b; ///aflam cifa minima din al doilea numar
    if (c<min2) min2=c;
    if (b>max2) max2=b; ///aflam cifra maxima din al doilea numar
    if (c>max2) max2=c;
    mij2=a+b+c-min2-max2;   ///aflam cifra din mijloc ca valoare din al doilea numar
    ///afisam rezultatele in functie de caz
    if (max1>max2)  cout<<max1*10+max2<<" ";    ///afisam cel mai mare numar care se poate forma cu cifrele maxime
    else    cout<<max2*10+max1<<" ";
    if (min1!=0 && min2!=0) ///daca cifrele minime sunt ambele diferite de zero
    {
        if (min1<min2)  cout<<min1*10+min2;
        else    cout<<min2*10+min1;
    }
    else
    {
        if (min1==0 && min2!=0)
        {
            if (mij1<min2 && mij1!=0) cout<<mij1*10+min2;
            else
            {
                if (max1<min2)  cout<<max1*10+min2;
                else    cout<<min2*10;

            }
        }
        else
            if (min1!=0 && min2==0)
            {
                if (mij2<min1 && mij2!=0) cout<<mij2*10+min1;
                else
                {
                    if (max2<min1)  cout<<max2*10+min1;
                    else    cout<<min1*10;
                }
            }
        else
        {
            if (mij1!=0 && mij2!=0) ///daca valorile din mijloc sunt diferite de 0
            {
                if (mij1<mij2)  cout<<mij1*10;
                else    cout<<mij2*10;
            }
            else
            {
                if (mij1!=0 && mij2==0) cout<<mij1*10;
                else if (mij1==0 && mij2!=0)    cout<<mij2*10;
                else
                {
                    if (max1<max2)  cout<<max1*10;
                    else    cout<<max2*10;
                }
            }
        }
    }
    return 0;
}