#include <cstring>

void revCuv(char s[], int st, int ed)
{
    int l = ed-st;
    for (int i=0; i<=l/2; i++)
    {
        swap(s[st+i], s[ed-i]);
    }
}

void ReverseWords(char s[])
{
    int stg=0, dr=0, sz = strlen(s);
    revCuv(s, 0, sz-1);
    while (dr<sz)
    {
        if (s[dr]==' ')
        {
            revCuv(s, stg, dr-1);
            stg = dr+1;
        }
        dr++;
    }
    revCuv(s, stg, sz-1);
}