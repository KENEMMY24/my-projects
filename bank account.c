#include <stdio.h>


struct Customer{
	char Name[30];
	char accounttype[30];
	int deposit;
	int balance;
};

int main(){
	
	struct Customer cust1;
	cust1.deposit =100000;
	cust1.balance =100000;
	strcpy(cust1.Name, "Ronny");
	strcpy(cust1.accounttype, "current account");
	
	printf("%d", cust1.balance);
	
	return 0;
	
}
