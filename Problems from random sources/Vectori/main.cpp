#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n,min=0,cnt=0,a[100]; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    for (int i = 0; i < n; i++) {

        cin >> a[i]; cin.ignore();
        cnt++;
        if(cnt==1){
            min=a[i];
        }
        else if(abs(a[i])<abs(min)){
            min=a[i];

        }

    }
    for(int i=0; i<n;i++){
        if(a[i]>0 && abs(a[i])==abs(min))
            min=a[i];
    }

cout<<min<<endl;
}
