#include <algorithm>
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sort_div.in");
ofstream fout("sort_div.out");

int n, i;

struct number
{
    int val;
    int divcount;
    int cc;
    int fd;
};

number v[10000];

static int count_divisors(int n)
{
    int cnt = 1;
    int d = 2;
    int p = 0;

    while (n > 1) {
        p = 0;
        while (n % d == 0)
            n /= d, p++;
        if (p)
            cnt *= (p + 1);
        d++;
        if (d * d > n)
            d = n;
    }

    return cnt;
}

static int control(int a)
{
    if(a == 0)
        return 0;
    if(a % 9 == 0)
        return 9;

    return a % 9;
}

static int first_digit(int a)
{
    while(a > 9)
        a /= 10;

    return a;
}

static bool sortdiv(number a, number b)
{
    if(a.divcount < b.divcount)
        return true;
    else if(a.divcount > b.divcount)
        return false;

    if(a.cc < b.cc)
        return true;
    else if(a.cc > b.cc)
        return false;

    if(a.fd < b.fd)
        return true;
    else if(a.fd > b.fd)
        return false;

    return a.val < b.val;
}

int main(void)
{
    int x;
    number y;

    fin >> n;

    for(i = 0; i < n; i++) {
        fin >> x;
        y.val = x;
        y.divcount = count_divisors(x);
        y.cc = control(x);
        y.fd = first_digit(x);
        v[i] = y;
    }

    sort(v, v + n, sortdiv);

    for(i = 0; i < n; i++)
        fout << v[i].val << " ";

    return 0;
}