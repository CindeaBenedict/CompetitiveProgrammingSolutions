#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char a[260];
    char b[260];
    int j=0;
    cin.getline(a, 260);
    cin.getline(b, 260);
    int i=0;
    int start =0;
    while(a[i]!='\0'){
        bool ok=true;
        j=0;
        while(b[j]!='\0'){
            if(a[i+j]!=b[j])
            ok=false;
            j++;
        }
        if(ok==true)
        start=i;
        i++;
    }
    i=0;
    while(a[i]!='\0'){
        if(i==start){
        j=0;
        while( b[j]!='\0')
        j++, i++;}cout<<a[i];
     i++;
    }
    return 0;
}