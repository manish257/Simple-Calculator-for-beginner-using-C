#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rightAnswer(void);
void wrongAnswer(void);
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
	size_t i;
	
	int answer =0;
	int right =0;
	int wrong =0;
	
	
	for( i=1; i<=10; ++i){
		m = rand() % 10;
		n = rand() % 10;
		
		printf("How much is %d times %d ?",m,n);
		scanf("%d",&answer);
		
		if( answer != m*n){
			wrong++;
			wrongAnswer();
		}		
		else{
			right++;
			rightAnswer();
		}
	}
	
	if ((double)right/(right+wrong)<0.75){
		printf("Please ask your instructor for EXTRA HELP\n");
	}
	
	printf("\n\n\n\nPractise more, You will be PERFECT one day for sure.\n");
}

void rightAnswer(void){
	
	switch ( rand() % 4){
		case 1:
			printf("Very Good!\n\n");
			break;
			
		case 2:
			printf("Excillent!\n\n");
			break;
			
		case 3:
			printf("Nice Work!\n\n");
			break;
			
		case 4:
			printf("Keep it the good work!\n\n");
			break;
	}
}

void wrongAnswer(void){
	switch ( rand() % 4){
		case 1:
			printf("No. Please try again.\n\n");
			break;
			
		case 2:
			printf("Wrong. Try once more.\n\n");
			break;
			
		case 3:
			printf("Don't give up!'\n\n");
			break;
			
		case 4:
			printf("No. Keep trying.\n\n");
			break;
	}
}
