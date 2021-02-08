#include "helper.h"
int main(){
	int i;
	L:
	printf("Enter number to get factorial ");
	scanf("%d", &i);	
	fflush(stdin);
	
	if(i == 0){
		printf("Please enter valid number %d\n", sizeof i);
		goto L; 
	}
	
	printf("Factorial of %d is %d", i, factorial(i));
}
