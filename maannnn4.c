#include<stdio.h>
void main()
{
int i,a,b,c=0;
 clrscr();     
 printf("\n Enter The Number:");
 scanf("%d",&a);
 for(i=a;i>0; )
{
 b=i%10;
        c=c*10+a;
        i=i/10;
    }
    if(c==a)
    {
        printf("\n %d is a Palindrome Number",a);
    }
    else
    {
        printf("\n %d is not a Palindrome Number",a);
    }
    getch();
    }
