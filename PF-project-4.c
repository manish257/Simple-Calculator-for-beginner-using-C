#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int status(int level);
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

int status(int level){
	switch (level){
		case 1:
			return rand() % 10;
			
		case 2:
			return rand() % 100;
			
		case 3:
			return rand() % 1000;
		default:
			return rand() % 10;
	}
}



void product(void){

	int m;
	int n;
	int capacity;
	int right=0;
	int wrong=0;
	unsigned int answer =0;
	size_t i;
	printf("Enter the level (1 to 3)");
	scanf("%d",&capacity);

	
	for(i=1;i<=10;i++){
		m=status(capacity);
		n=status(capacity);
		
		printf("How much is %d times %d ?",m,n);
		scanf("%u",&answer);
		
		if(answer != m*n){
			++wrong;
			wrongAnswer();
		}
		else{
			++ right;
		rightAnswer();
		}
	}
	if ((double)right/(right+wrong)<0.75){
		printf("\n\nPlease ask your instructor for EXTRA HELP\n");
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
