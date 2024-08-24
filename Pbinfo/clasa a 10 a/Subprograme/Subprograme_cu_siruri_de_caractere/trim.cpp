void Trim(char* str) {
    int a = 0, b = 0, total = 0;
    while(*str == ' ')
        str += 1, a += 1;
    str -= a;
    char* p = str;
    while(*p != '\0')
        total += 1, b = *p != ' ' ? 0 : ++b, p += 1;
    *(str + total - b) = '\0';
    for(char *p = str, count = 0; count < total - b; p++, count++)
        *p = *(p + a);
}