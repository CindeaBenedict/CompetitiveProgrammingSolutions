#include<iostream>
using namespace std;
int n,i,max1,a[1001],l[1001],k,t,aux[1001]={0};
void lm()
{
	l[n]=1;
    for(k=n-1;k>=1;k--)
    {
        max1=0;
        for(i=k+1;i<=n;i++)
            if(a[i]>a[k]&&l[i]>max1)
                max1=l[i];
        l[k]=1+max1;
    }
    max1=l[1];
    t=1;
    for(k=1;k<=n;k++)
        if(l[k]>max1)
        {
            max1=l[k];
            t=k;
        }
	cout<<max1<<endl;
	cout<<t<<" ";
	for(i=t-1;i<=n;i++)
		if(a[i]>a[t]&&l[i]==max1-1)
		{
			aux[i]=a[i];
			max1--;
		}
    for(i=1;i<=n;i++){
        if(aux[i]==a[i])
            cout<<i<<" ";}

}

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
	lm();
	return 0;}
