#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rightAnswer(void);
void wrongAnswer(void);
void product(void);

int main(void){
	srand(time(NULL));
	
	product();
	
	return 0;
	
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

void product(void){

	int m;
	int n;
	
	int answer =0;
	
	printf("Please Enter -1 to End the program.\n");
	
	while(answer != -1){
		m = rand() % 10;
		n = rand() % 10;
		
		printf(" How much is %d times %d ?",m,n);
		scanf("%d",&answer);
		
		while(answer != -1 && answer != m*n){
			wrongAnswer();
			scanf("%d",&answer);
		}		
		
		if(answer !=-1){
			rightAnswer();
		}
	}
	
	printf("\n\nThats all for now.\n");
}
