
#include<stdio.h>
void main()
{
int a, b, i, c;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &a, &c);
printf("Prime numbers between %d and %d are: ", a, c);
while (a < c)
{
b= 0;
for(i = 2; i <= a/2; ++i)
{
if(a % i == 0)
{
b = 1;
break;
}
}
if (b == 0)
printf("%d ", a);
++a;
}
return 0;
}
