#include<iostream>

using namespace std;

int main(){
    cout<<"cerinta 1"<<endl<<endl;

int n,s=0;
    for(n=1;n<=500;n++){
        s=0;
        for(int t=1;t<=n/2;t++)
            {


    if(n%t==0)
        s=s+t;}
        if(s==n)
            cout<<n<<" ";
    }



    cout<<endl;
  cout<<"A doua cerinta"<<endl;
  cout<<endl;
    int i, j, isPrime;

    for(i = 2; i <= 500; i++){
        isPrime = 0;
        for(j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = 1;
                 break;
             }
        }
        if(isPrime==0)
            cout << i << " ";


    }
    cout<<endl<<endl;

    cout<<"Cerinta 3"<<endl<<endl;

int b,o,cnt;
   for(b=1;b<=500;b++){
        cnt=0;
    for(o=1;o<=b;o++){
        if(b%o==0)
            cnt++;
    }
   if(cnt>=8 && cnt<=10)
    cout<<b<<" ";
   }

   return 0;
}
