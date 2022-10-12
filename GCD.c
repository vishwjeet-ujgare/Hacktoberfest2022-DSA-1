#include<stdio.h>
#include<conio.h>
int gcd(int,int);
void main()
  {
  int a,b;
  clrscr();
  printf("enter the value of a and b:");
  scanf("%d%d",&a,&b);
  int result=gcd(a,b);
  printf("gcd of %d and %d is %d",a,b, result);
  getch();
  }
int gcd(int n1,int n2)
  {
  if(n2!=0)
    return(gcd(n2,n1%n2));
  else
  return n1;
  }
