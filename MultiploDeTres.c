#include <stdio.h>
#define p printf
#define s scanf
int main(void)
{
    int num1;
    p("Ingrese un n%cmero: ",163);
    s("%d", &num1);

    if ((num1 % 3) == 0)
    {
        p("el n%cmero %d es m%cltiplo de 3",163, num1,163);
    }
    else
    {
        p("el n%cmero %d NO es m%cltiplo de 3",163, num1,163);
    }

    return 0;
}