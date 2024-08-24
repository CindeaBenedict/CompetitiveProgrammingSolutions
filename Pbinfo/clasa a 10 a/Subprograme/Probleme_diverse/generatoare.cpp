
void generatoare(unsigned int n)
{
    unsigned int i, a, b;
    bool ok = 0;
    for (i = 2; i <= n / 2; i = i + 2)
    {
        a = i;
        b = n / a;
        if (a == n / 2)
            b = 1;
        if (a * b + (a / b) == n)
        {
            cout << a << "-" << b << " ";
            ok = 1;
        }
    }
    if (ok == 0)
        cout << "nu exista";
}