#include <stdio.h>

int main(){
	int luckynumbers=768;
	int guess; 
	int guesscount = 0;
	int guesslimit = 3;
	int outofguesses = 0;
	
	while (guess!=luckynumbers && outofguesses==0){
		if(guesscount < guesslimit){
		   printf("Enter the 3 lucky numbers to win $20million: ");
		   scanf("%d", &guess);
		   guesscount++;}
		else {
			outofguesses=1;
		}
		

	}
	
	if (outofguesses==1){
		printf("OUT OF GUESSES!");
	}
	else {
		printf("YOU HAVE WON $20MILLION!");
	}
	
	return 0;
}
