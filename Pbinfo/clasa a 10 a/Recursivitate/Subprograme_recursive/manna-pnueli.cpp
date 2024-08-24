long int mp(long int x)
{
    if(x>=12) return x-1;
    return mp(mp(x+2));
}