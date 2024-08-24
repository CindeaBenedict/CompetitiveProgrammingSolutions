#include <bits/stdc++.h>
using namespace std;

char s[100001];
int f1[300] , f2[300];

bool egale(int cnt1 , int cnt2 , int cnt3)
{
    bool ok = true;
    for(int i = 97 ; i <= 122 ; ++i)
    {
        if(f1[i]>f2[i])
        {
            if(i==97 || i==101 || i==105 || i==111 || i==117)
            {
                if(cnt2)
                    cnt2--;
                else if(cnt3)
                    cnt3--;
                else
                    return 0;
            }
            else
            {
                if(cnt1)
                    cnt1--;
                else if(cnt3)
                    cnt3--;
                else
                    return 0;
            }
        }
    }
    return ok;
}

int main()
{
    int cnt1=0 , cnt2=0 , cnt3=0;
    cin >> s;
    int i = 0;
    f1[97]++;
    f1[100]++;
    f1[111]++;
    f1[98]++;
    f1[101]++;
    while(s[i]!='\0')
    {
        if((int) s[i] < 96 && (s[i]!='+' && s[i]!='-' && s[i]!='*'))
            s[i]=(char)((int)s[i]+32);
        ++i;
    }
    i=0;
    int cnt = 0;
    for(i = 0 ; i < 5 ; ++i)
    {
        if(s[i]!='+' && s[i]!='-' && s[i]!='*')
            f2[(int)s[i]]++;
        else
        {
            if(s[i]=='+')
                cnt1++;
            else if(s[i]=='-')
                cnt2++;
            else
                cnt3++;
        }
    }
    if(egale(cnt1 , cnt2 , cnt3))
        {
            cnt++;
        }
    while(s[i]!='\0')
    {
        if(s[i-5]!='+' && s[i-5]!='-' && s[i-5]!='*')
            f2[(int)s[i-5]]--;
        else
        {
            if(s[i-5]=='+')
                cnt1--;
            else if(s[i-5]=='-')
                cnt2--;
            else
                cnt3--;
        }
        if(s[i]!='+' && s[i]!='-' && s[i]!='*')
            f2[(int)s[i]]++;
        else
        {
            if(s[i]=='+')
                cnt1++;
            else if(s[i]=='-')
                cnt2++;
            else
                cnt3++;
        }
        if(egale(cnt1 , cnt2 , cnt3))
        {
            cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}