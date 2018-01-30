#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,l;
  clrscr();
  printf(" Enter the limits as limit1 to limit2\n ");
  scanf("%d%d",&k,&l);
  printf(" The ODD NUMBERS BETWEEEN %d and %d\n ",k,l);
  for(n=k;n<=l;n++)
{
  if(n%2!=0)
  printf("\n %d",n);
  }
 
  getch();    
  }
