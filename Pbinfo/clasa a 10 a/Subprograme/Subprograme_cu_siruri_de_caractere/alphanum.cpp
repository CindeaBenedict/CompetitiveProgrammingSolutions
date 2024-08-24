void Alphanum(char s[], char cuv[][21], int &n, int num[], int &m){

    n = 0;
    m = 0;
    int i = 0;
    while(s[i]){

        if(s[i] >= 'a' && s[i] <='z'){ /// Daca ne aflam intr-un cuvant
            int poz = i;  /// Salvam pozitia de start in i si cu poz mergem pana la spatiu ' ';

        while(s[poz] >= 'a' && s[poz] <='z') 
            poz++;

        int j = 0;
        for(int k = i ; k < poz ; ++k) /// Salvam in cuvantul curent;
            cuv[n][j++] = s[k];


        n++; /// Crestem contorul de cuvinte
        i += poz - i - 1; /// Trecem peste caracterele curente cu formula asta...
        }
        
        else if(s[i] >= '0' && s[i] <= '9'){ /// Daca ne aflam intr-un numar
            int poz = i; /// Procedam la fel.

        while(s[poz] >= '0' && s[poz] <= '9')
            poz++;

        int x = 0;
        for(int k = i ; k < poz ; ++k) /// Transformam din caracter in (int)
            x =  x * 10 + (s[k] - '0');

        num[m++]=x; /// Adaugam in rezultat
        i += poz - i - 1; /// Trecem peste caracterele deja verificate
        }
        
        i++; /// In cazul in care avem spatiu ' ' parcurgem normal din 1 in 1
    }
}