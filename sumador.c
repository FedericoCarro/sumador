#include <stdio.h>
#define p printf
#define s scanf 

int main (void)
{
    int num1, num2,num3, suma;

    p("Ingrese un valor: ");
    s("%d", &num1);
    p("Ingrese otro valor: ");
    s("%d", &num2);
    p("Ingrese otro valor: ");
    s("%d", &num3);

    suma= num1+num2+num3;

    p("%d + %d + %d = %d",num1,num2,num3,suma);
    return 0;
}