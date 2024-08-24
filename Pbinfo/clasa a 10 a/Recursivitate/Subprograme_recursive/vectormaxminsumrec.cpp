void P (int x[], int n, int & mini, int & maxi, int & sum)
{
    if (n==0)
    {
        mini=99999999;
        maxi=-99999999;
        sum=0;
    }
    else
    {
        P(x,n-1,mini,maxi,sum);
        if (x[n-1]<mini) mini=x[n-1];
        if (x[n-1]>maxi) maxi=x[n-1];
        sum=sum+x[n-1];
    }
}