#include <stdio.h>
int main()
{
int number1, number2, difference;
printf("Enter two integers: ");
scanf("%d %d", &number1, &number2);
difference = number1 - number2;
printf("%d - %d = %d", number1, number2, difference);
return 0;
}
