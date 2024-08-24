#include <bits/stdc++.h>
using namespace std;

int f[10];

int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='0')
            f[0]++;
        if(ch[i]=='1')
            f[1]++;
        if(ch[i]=='2')
            f[2]++;
        if(ch[i]=='3')
            f[3]++;
        if(ch[i]=='4')
            f[4]++;
        if(ch[i]=='5')
            f[5]++;
        if(ch[i]=='6')
            f[6]++;
        if(ch[i]=='7')
            f[7]++;
        if(ch[i]=='8')
            f[8]++;
        if(ch[i]=='9')
            f[9]++;  
        i++;  
    }
    int max=0 , val=-1;
    for(int i = 0 ; i <= 10 ; ++i)
    {
        if(f[i]>max)
            max=f[i] , val=i;
    }
    if(val==-1)
        cout << "NU";
    else
        cout << val;
}