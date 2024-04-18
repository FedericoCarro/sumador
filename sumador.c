#include <stdio.h>
#define p printf
#define s scanf 

int main (void)
{
    int num1, num2,num3,num4, suma;

    p("Ingrese un valor: ");
    s("%d", &num1);
    p("Ingrese otro valor: ");
    s("%d", &num2);
    p("Ingrese otro valor: ");
    s("%d", &num3);
    p("Ingrese otro valor: ");
    s("%d", &num4);


    suma= num1+num2+num3+num4;

    p("%d + %d + %d + %d = %d",num1,num2,num3,num4,suma);
    return 0;
}