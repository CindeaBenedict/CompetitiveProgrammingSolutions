long int cifmaxpar(long int x)
{
    if(x<10)
    {
        if(x%2==0) return x;
        if(x%2==1) return -1;
    }
    if((x%10%2)==1) return cifmaxpar(x/10);
    if(((x/10)%10)%2==1) return cifmaxpar((x/100)*10 + x%10);
    if( (x%10 < (x/10)%10) || (x%10 == (x/10)%10) ) return cifmaxpar(x/10);
    if(x%10 > (x/10)%10) return cifmaxpar((x/100)*10 + x%10);
}