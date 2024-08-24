int FBaza(const char s[]) {
    int maxDigit = -1, maxLetter = -1, others = 0;
    for(int i = 0; s[i]; i++) {
        if(isdigit(s[i]))
            maxDigit = max(maxDigit, s[i] - '0');
        else if(isalpha(s[i]) && tolower(s[i]) <= 'f')
            maxLetter = max(maxLetter, tolower(s[i]));
        else
            others = 1;
    }
    if(others)
        return -1;
    if(maxLetter != -1)
        return 16;
    for(int i = 1; i <= 3; i++)
        if(maxDigit < (1 << i))
            return 1 << i;
    return 10;
}