#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* Write a C game program that allows a user to guess a number between 0 and 99. A while loop is appropriate 
since we know that winning the game always requires at least one guess. Your program should display a 
message whether the new guess must be above(up) or below(down) the old guess. (Use rand() function to be 
able to choose the asked number).
Example Run:
Make a Guess: 13
Wrong! Up Please! New Guess: 44
Wrong! Down Please! New Guess: 32
Yes this is the correct guess! Thank you! */

int main(int argc, char *argv[]) 
{
	
	
	//initialize random number generator
	//ssrand(unsigned) time(&t);
	
	//print random numbers 0 to 49
	//printf("%d\n",rand()%50);
	
	//number between 1 to 100
	//int number  = 1 +(rand()%100);
	
	
	
	srand((unsigned int)time(NULL));   // Initialization, should only be called once. 
    
    int machine = rand()%100;
	int guess;
	printf("%d\n",machine);
	printf("Make a Guess: ");
	scanf("%d",&guess);
	
	while(guess != machine)
	{
		if(guess<machine)
		{
			printf("Wrong! Up Please!");
			printf("  New Guess: ");
			scanf("%d",&guess);
		}
		else if(guess>machine)
		{
			
			printf("Wrong! Down Please!");
			printf("  New Guess: ");
			scanf("%d",&guess);
       }
       
   }
	
	   if(guess==machine)
	   printf("Yes this is the correct guess! Thank you!");
	
	
	return 0;
}
