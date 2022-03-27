#include <stdio.h>
#include <math.h>
int input_number()
{
int num;
printf("Enter the number:\n");
scanf("%d", &num);
return num;
}
int is_prime(int n)
{
for (int i = 2; i <= sqrt(n); i++)
{
if (n%i == 0)
return 1;
}
return 0;
}
void output(int n, int is_prime)
{
if (is_prime==1)
printf("%d is not a prime number\n", n);
else 
printf("%d is a prime number\n", n);
}
int main()
{
int num = input_number();
int res = is_prime(num);
output(num, res);
return 0;
}
