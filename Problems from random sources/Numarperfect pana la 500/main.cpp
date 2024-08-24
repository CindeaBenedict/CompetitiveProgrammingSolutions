#include<iostream>
using namespace std;

int main()
{
     int i,s=1,d;

     for(i=2;i<10000;i++)
     {
         for(d=2;d<=i/2;d++)
        {
            if(i%d==0)
            {
              s+=d;
             }
              if(s==i)
                    cout<<i<<" nr perfect"<<endl;
          }
      }
return 0;
}
