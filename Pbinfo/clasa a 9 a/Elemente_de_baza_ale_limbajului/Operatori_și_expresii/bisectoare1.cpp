#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, h1, h2, h3, p;
    scanf("%f %f %f", &a, &b, &c);
    if((a + b > c) && (b + c > a) && (a + c > b))
    {
        p = (a + b + c) / 2;
        h2 = sqrt((4 * a * c * p * (p - b))/((a + c) * (a + c)));
        h3 = sqrt((4 * b * a * p * (p - c))/((b + a) * (b + a)));
        h1 = sqrt((4 * b * c * p * (p - a))/((b + c) * (b + c)));

        h3 = h3 * 100;
        h2 = h2 * 100;
        h1 = h1 * 100;
        int H1 = h1;
        int H2 = h2;
        int H3 = h3;

        printf("%d.%d%d %d.%d%d %d.%d%d", H1/100, (H1/10)%10, H1%10,  H2/100, (H2/10)%10, H2%10,  H3/100, (H3/10)%10, H3%10);
    }
    else
        printf("Imposibil");
    return 0;
}

//rezolvare C