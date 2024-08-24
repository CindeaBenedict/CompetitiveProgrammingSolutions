
#include <fstream>

void interclasare(){
    
    ifstream fin("file1.txt");
	ifstream fin2("file2.txt");
	ofstream fout("file.out");
    int n, m, x, y;
    fin >> n;
    fin2 >> m;
    fin >> x;
    fin2 >> y;
    int i = 1, j = 1;
    while(i <= n && j <= m){
        if(x <= y){
            fout << x << " ";
            fin >> x;
            i++;
        }else{
            fout << y << " ";
            fin2 >> y;
            j++;
        }
    }
    while(i <= n){
        fout << x << " ";
        fin >> x;
        i++;
    }
    while(j <= m){
        fout << y << " ";
        fin2 >> y;
        j++;

    }

}