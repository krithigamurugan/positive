#include<stdio.h>
#include<conio.h>
void main()
{
 int y;
 clrscr();
 printf("Enter a year:\n");
 scanf("%d",&y);
 if ( year%400 == 0)
 {
  printf("%d is a leap year.\n",y);
 } 
 else if (y%100 == 0)
 { 
  printf("%d is not a leap year.\n",y);
 }
 else if (y%4 == 0 )
 {
  printf("%d is a leap year.\n",y);
 }
 else
 { 
  printf("%d is not a leap year.\n",y);  
 }
 getch();
}
