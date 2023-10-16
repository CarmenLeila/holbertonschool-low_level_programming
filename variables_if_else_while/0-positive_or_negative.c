#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{ 
	srand(time(0));
	      n = rand()  - RAND_MAX / 2;
       	int n;
	if(n > 0)
	{
      	 printf("the number is positive\n");
	} 
       else if(n == 0);
       {
         printf("the number is zero\n");
       } 
       else
       {       
         printf("the number is negative\n");
       }
       return 0 ;
} 
