int n, sum, q = -1;

int get_val(matrice_rara a, int i, int j){

    for(int k = 0; k < a.nr_triplete; k++)
        if(i == a.t[k].linie && j == a.t[k].coloana)
            return a.t[k].valoare;

    return 0;
}

void inmultire(matrice_rara a, matrice_rara b, matrice_rara &c){

    c.nr_linii = a.nr_linii;
    c.nr_coloane = b.nr_coloane;
    n = a.nr_coloane; // = b.nr_linii

    for(int i = 0; i < c.nr_linii; i++){
        for(int j = 0; j < c.nr_coloane; j++){

            sum = 0;
            for(int r = 0; r < n; r++)
                sum += get_val(a, i, r) * get_val(b, r, j);
            
            if(sum)
                c.t[++q] = {i, j, sum};
        }
    }

    c.nr_triplete = q + 1;
}