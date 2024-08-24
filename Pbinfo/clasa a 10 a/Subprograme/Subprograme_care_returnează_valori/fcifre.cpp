int nr_cif(int a,int k)
{
    int cnt=0;
    while (a)
    {
    if (a%10!=0)
    if (k%(a%10)==0)
    cnt++;
    a/=10;
    }
    return cnt;
}