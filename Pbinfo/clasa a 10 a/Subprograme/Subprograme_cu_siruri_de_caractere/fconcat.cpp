
void FConcat(char s[], char d[]){
    int i = 0;
    while(s[i]){
        i++;
    }
    int j = 0;
    while(d[j]){
        s[i] = d[j];
        i++;
        j++;
    }
    s[i] = '\0';
}