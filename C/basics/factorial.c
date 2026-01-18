#include <stdio.h>

/*int main()
{
    printf("SHRUTI KHANAL\n");

    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;*/

 int main()
{
    

    int n, i;
     long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d =%ld", n, fact);
    return 0;
}
