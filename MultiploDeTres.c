#include <stdio.h>
#define p printf
#define s scanf
int main(void)
{
    int num1;
    p("Ingrese un numero: ");
    s("%d", &num1);

    if (num1 % 3 == 0)
    {
        p("el numero %d es multiplo de 3", num1);
    }
    else
    {
        p("el numero %d NO es multiplo de 3", num1);
    }

    return 0;
}