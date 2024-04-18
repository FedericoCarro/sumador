#include <stdio.h>
#define p printf
#define s scanf
int main(void)
{
    int edad;
    p("ingrese una edad: ");
    s("%d",&edad);
    if(edad<0 || edad>130){
        p("%d no es una edad no valida",edad);
    }
    else
        if(edad>=18)
        p("%d es mayor de edad",edad);
        else 
        p("%d es menor de edad",edad);
return 0;
}