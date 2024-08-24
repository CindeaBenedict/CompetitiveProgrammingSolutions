int inString(char c, char text[]){
    int i=0;
    while (text[i])
    {
        if (c==text[i++]) return 1;
    }
    return 0;
}
int sariPesteSeparatori(char sursa[], char sep[], int pozStart){
    while(inString(sursa[pozStart], sep) && sursa[pozStart]) pozStart++;
    if (sursa[pozStart]==0) return -1;
    return pozStart;
}
int cuvant(char dest[], char sursa[], char sep[], int pozStart){
    int k=0;
    dest[0]=0;
    while(!inString(sursa[pozStart], sep) && sursa[pozStart])
    {
        dest[k]=sursa[pozStart];
        k++;
        pozStart++;
    }
    dest[k]=0;
    return pozStart;
}


int extrageCuvant(char dest[], char sursa[], char sep[], int nrcuv){
    int nrc=-1;
    int pozCurenta=0;
    while(nrc<nrcuv){
        nrc++;
        pozCurenta = sariPesteSeparatori(sursa, sep, pozCurenta);
        pozCurenta = cuvant(dest, sursa, sep, pozCurenta);
        if (dest[0] && nrc==nrcuv) return 1;
        if (!dest[0]) return 0;
    }
    return 0;
}