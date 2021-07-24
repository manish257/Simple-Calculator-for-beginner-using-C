#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choices(void);
void calculations(void);
void rightAnswer(void);
void wrongAnswer(void);
void product(void);

int main(void){
	srand(time(NULL));
	printf("WELCOME TO THE PROGRAM\n\n");
	calculations();
	printf("\n\nYOU CAN DO EVERYTHING, NEVER LOOSE YOUR HOPE");
	return 0;
	
}

int choices(void)
{
	int options;
	
	do{
		printf("What kind of calculation do you wish to tackle?\n");
		printf("Press 1 for addition\n");
		printf("Press 2 for subtraction\n");
		printf("Press 3 for multiplication\n");
		printf("Press 4 for division\n");
		printf("Press 5 for combination of 1 to 4\n");
		printf("???");
		scanf("%d",&options);
	}while(options<1 || options>5);
	return options;
}


void calculations(void){

	int m;
	int n;
	size_t i;
	int ANSWER;
	int answer;
	int right =0;
	int wrong =0;
	int selection;
	int problem;
	int type;
	char ooperator;
	
	selection= choices();
	type=selection;
	
	for( i=1; i<=10; ++i){
		m = rand() % 10;
		n = rand() % 10;
		
		if(selection==5){
			problem= 1+ rand() % 4;
			type=problem;
		}
		
		switch(type){
			case 1:
				ooperator ='+';
				ANSWER=m+n;
				break;
				
			case 2:
				ooperator='-';
				ANSWER =m-n;
				break;
				
			case 3:
				ooperator='*';
				ANSWER=m*n;
				break;
				
			case 4:
				ooperator='/';
				if(n==0){
					n=1;
					ANSWER=m/n;
				}
				else{
					ANSWER=m/n;
				}
				break;
				
		}
		
		printf("How much is %d %c %d ?",m,ooperator,n);
		scanf("%d",&answer);
		
		if( answer != ANSWER){
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
	
	printf("\n\nPractise more, You will be PERFECT one day for sure.\n");
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
