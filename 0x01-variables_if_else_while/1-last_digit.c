<<<<<<< HEAD
/*                                                                                                                                      
 *
 *                                                                                                                                       *File: o.posiive                                                                                                                       
 *
 *                                                                                                                                        *author: thibaut7                                                                                                                      
 *
 *                                                                                                                                        */                                                                                                                                      

#include <stdio.h>                                                                                                                      

#include <stdlib.h>                                                                                                                     

#include <time.h>                                                                                                                       

                                                                                                                                        

/* more headers goes there */                                                                                                           

                                                                                                                                        

/**                                                                                                                                     
 *
 *  * main - main function                                                                                                                 
 *
 *   *                                                                                                                                      
 *
 *    * Return: text                                                                                                                         
 *
 *    */                                                                                                                                      

int main(void)                                                                                                                          

	                                                                                                                                        

{                                                                                                                                       

	        int n;                                                                                                                          

		                                                                                                                                        

		        srand(time(0));                                                                                                                 

			        n = rand() - RAND_MAX / 2;                                                                                                      

				        /* your code goes there */                                                                                                      

				        if (n > 0)                                                                                                                      

						                printf("%d is positive\n", n);                                                                                          

					        else if (n == 0)                                                                                                                

							                printf("%d is zero\n", n);                                                                                              

						        else                                                                                                                            

								                printf("%d is negative\n", n);                                                                                          

							        return (0);                                                                                                                     


=======
/*
 * File: 1-last_digit.c
 * Auth: Brennan D Baraban
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);

}
>>>>>>> 646294141abf14f241cc7be7203845874c400b82
