#include <stdio.h>

/**
 * main - Program that prints the size of various types
 * Return:0 (Success)
 */
int main(void)
{       char  C;
	int I;
	long int B;
	long long int H;
	float F;
	 printf("Size of a char: %lu byte(s)\n", sizeof(C));                                                                      
	 printf("Size of an int: %lu byte(s)\n", sizeof(I));                                                                       
	 printf("Size of a long int: %lu byte(s)\n", sizeof(B));                                                              
         printf("Size of a long long int: %lu byte(s)\n", sizeof(H));                                                     
         printf("Size of a float: %lu byte(s)\n", sizeof(F));                                                                    
                 return (0);                                                                                                             
}
