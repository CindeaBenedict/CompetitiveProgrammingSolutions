#include <iostream>

#include <cmath>

#include <iomanip>


using namespace std;


int main()

{

 /*

  * Teorema medianei:

  * MA = mediana trasa din punctul A pe latura BC

  * MA*MA = ( 2*(AB*AB+AC*AC) - BC*BC ) / 4

  *

  * Un triunghi exista daca:

  * AB+AC >= BC si AB+BC >= AC si BC+AC >= AB

  */

 double a, b, c, MA, MB, MC;

 // a = AB, b = BC, c = AC

 cin >> a >> b >> c;

 if (a + b >= c && a + c >= b && b + c >= a)

 {

   MA = sqrt((2 * (b * b + c * c) - a * a) / 4);

   MB = sqrt((2 * (a * a + c * c) - b * b) / 4);

   MC = sqrt((2 * (b * b + a * a) - c * c) / 4);

   

   //Fixes

   MA = (int)(MA * 100) / 100.0;

   MB = (int)(MB * 100) / 100.0;

   MC = (int)(MC * 100) / 100.0;

   cout << fixed << setprecision(2) << MA << " " << MB << " " << MC;

 }

 else

 {

   cout << "Imposibil";

 }

 return 0;

}

