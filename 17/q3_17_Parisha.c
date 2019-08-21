# include <stdio.h> 
# include <conio.h> 
void main() 
{ 
 int a = -1, b = 1, c = 0, i, n, sum = 0,avg ; 
 clrscr() ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
 printf("\nThe fibonacci series is : \n\n") ; 
 for(i = 1 ; i <= n ; i++) 
 { 
  c = a + b ; 
  printf("%d \t", c) ; 
  sum = sum + c ; 
  a = b ; 
  b = c ; 
 
 	avg= avg / n;
 }
 printf("\n\nThe sum of the fibonacci series is : %d", sum) ;
  printf("\n\nThe average of the fibonacci series is : %d", avg) ;
 getch() ; 
} 