#include <stdio.h>
#include "addition.h"
int main(void) {
char action;
double a1, a2;


printf ("Hello USERS!!!\n");
printf ("Enter on operation (+,-,*,/): ");
scanf("%c", &action);
printf("Enter two operands:\n");
scanf("%lf %lf", &a1 ,&a2);
switch(action)
{
case '+':
    printf("The result is : %1f", summation(a1,a2));
    break;

case '-':
    
    break;

case '*':
    
    break;

case '/':
    
    break;

return 0;
}
}
