int zero(int n, int v[])
{
    for (int i=1; i<=2*n; i++)
    {
        if (i%2==1)
        {
            if (v[i]%2==0)
            {
                int j=i;
                while (j<2*n && v[j]%2==0)
                    j++;
                if (j<=2*n)
                {
                    int tmp = v[i];
                    v[i]=v[j];
                    v[j]=tmp;
                }
            }
        }
        else
        {
            if (v[i]%2==1)
            {
                int j=i;
                while (j<2*n && v[j]%2==1)
                    j++;
                if (j<=2*n)
                {
                    int tmp = v[i];
                    v[i]=v[j];
                    v[j]=tmp;
                }
            }
        }
    }
}