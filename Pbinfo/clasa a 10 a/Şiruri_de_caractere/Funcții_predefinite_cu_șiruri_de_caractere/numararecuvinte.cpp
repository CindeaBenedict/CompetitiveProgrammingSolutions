#include <iostream>
#include <cstring>
using namespace std;
int main(){
char ch[200];
    cin.getline(ch, 200);
    int i=0;
    bool ok=false;
    int cnt =0;
    int ye=0;
    while(ch[i]!='\0'){
        
        if(ch[i+1]=='\0' && ye==0)
            ch[i+1]=' ', ch[i+2]='\0', ye++;
        if((i==0 || ch[i-1]==' ') && strchr("AEIOUaeiou", ch[i]))
            ok=true;
            else if(ch[i]==' ')
            ok=false;
            if(strchr("AEIOUaeiou", ch[i])&& ok && ch[i+1]==' ') cnt++;
            i++;
            }
    cout<<cnt;
    return 0;
    
    
}