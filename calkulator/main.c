#include <stdio.h>

int main(void) {
char operation;
    double n1, n2;
printf("Welkome USERS\n ");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("Result is %lf",summation(n1 , n2);
            break;

        case '-':
            
            break;

        case '*':
         
            break;

        case '/':
         
            break;
return 0;
}
