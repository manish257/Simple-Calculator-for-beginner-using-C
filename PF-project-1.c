#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void product(void);

int main(void){
	srand(time(NULL));
	
	printf("WELCOME TO THE PROGRAM\n\n");
	product();
	printf("\n\nYOU CAN DO EVERYTHING, NEVER LOOSE YOUR HOPE");
	return 0;
	
}

void product(void){

	int m;
	int n;
	
	int answer =0;
	
	printf("Please Enter -1 to End the program.\n");
	
	while(answer != -1){
		m = rand() % 10;
		n = rand() % 10;
		
		printf("\nHow much is %d times %d ?",m,n);
		scanf("%d",&answer);
		
		while(answer != -1 && answer != m*n){
			printf("Sorry! There is some ERROR.\n");
			printf("Please try again.\n");
			scanf("%d",&answer);
		}		
		
		if(answer !=-1){
			printf("Very Good\n\n");
		}
	}
	
	printf("\n\n\n\nPractise more, You will be PERFECT one day for sure.\n\n");
}
