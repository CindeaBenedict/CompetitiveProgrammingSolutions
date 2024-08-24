int fact(int n){
    int val = 1;
    for(int i = 1; i <= n; ++i)
        val *= i;
    return val;
}

void interval(int n, int& a, int& b){
    a = fact(n - 1) + 1;
    b = fact(n + 1) - 1;
}