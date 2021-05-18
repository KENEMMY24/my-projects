#include <stdio.h>



int main(){
	double num;
	printf("Enter a number to check if its even: \n");
	scanf("%d", &num);
	
	double even = (num/2);
	if (even*2==num){
		printf("the number is even!\n\n");
	}else {
		printf("The number is odd!\n\n");
	}
	main();
	return 0;
}
