void cifminmax(int n, int &Max, int &Min)
{
    if (n < 9)
        Max = Min = n;
    else
    {
        Max = -1, Min = 10;
        while (n > 0)
        {
            int c = n % 10;
            if (c > Max)
                Max = c;
            if (c < Min)
                Min = c;
            n /= 10;
        }
    }
}