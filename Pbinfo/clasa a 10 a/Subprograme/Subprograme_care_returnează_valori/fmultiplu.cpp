int multipli(int n, int m, int o){
    while(n%o!=0)
        n++;
    while(m%o!=0)
        m--;
        return (m-n)/o+1;
}
