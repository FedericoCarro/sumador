#include <stdio.h>
#define p printf
#define s scanf
int main(void)
{
    int num1, num2/*,resultado*/;
    num1 = 1;
    num2 = 2;
    p("Ingrese un numero: ");
    s("%d", &num1);
    p("Ingrese otro numero: ");
    s("%d", &num2);
    // resultado= num1%2;
    if (num1 > num2)
    {
        p("\n%d es mayor que %d", num1, num2);
    }
    else if (num1 == num2)
    {
        p("\n%d es igual que %d", num1, num2);
    }
    else
    {
        p("\n%d es mayor que %d", num2, num1);
    }

    return 0;
}