#include <iostream>
#include <cstring>
using namespace std;
int main(){
char ch[300];
cin.getline (ch, 300);
int i=0;
while(ch[i]!='\0'){
    if(((int)ch[i]>=97 && (int)ch[i]<=122) || (int)ch[i]>=65 && (int)ch[i]<=90)
    { 
    cout<<ch[i];
}i++;}



    return 0;
    
    
}