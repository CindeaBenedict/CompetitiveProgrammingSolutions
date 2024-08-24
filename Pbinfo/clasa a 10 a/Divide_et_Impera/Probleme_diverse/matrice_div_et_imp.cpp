#include <iostream>
#include <fstream>


using namespace std ;

ifstream f ("matrice_div_et_imp.in") ;
ofstream g ("matrice_div_et_imp.out") ;

int n , a[520][520] ;

void div_et_imp ( int colt_stanga_i , int colt_stanga_j , int colt_dreapta_i , int colt_dreapta_j )
{
 if ( colt_dreapta_i == colt_stanga_i && colt_dreapta_j == colt_stanga_j )
    g << a[colt_stanga_i][colt_stanga_j] << " " ;
 else if ( colt_stanga_i < colt_dreapta_i && colt_stanga_j < colt_dreapta_j )
        {
         int mi = ( colt_dreapta_i + colt_stanga_i ) / 2 ;
         int mj = ( colt_dreapta_j + colt_stanga_j ) / 2 ;
         div_et_imp ( colt_stanga_i , colt_stanga_j , mi , mj ) ;
         div_et_imp ( mi + 1  , mj + 1 , colt_dreapta_i , colt_dreapta_j ) ;
         div_et_imp ( colt_stanga_i , mj + 1 , mi , colt_dreapta_j ) ;
         div_et_imp ( mi + 1 , colt_stanga_j , colt_dreapta_i , mj ) ;
        }
}


int main ()
{
 int marime ;
 f >> marime ;
 n = 1 ;
 for ( int i = 1 ; i <= marime ; ++i )
    n = n * 2 ;
 for ( int i = 1 ; i <= n ; ++i )
    for ( int j = 1 ; j <= n ; ++j )
        f >> a[i][j] ;
 div_et_imp ( 1 , 1 , n , n ) ;
 return 0 ;
}