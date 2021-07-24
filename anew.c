#include <stdio.h>

int lcm(int a, int b);
int main()
{
    int num1, num2, LCM;

    printf("Enter any number to find lcm: ");
    scanf("%d", &num1);
    
    printf("Enter another number to find lcm: ");
    scanf("%d",&num2);
    

    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    int x=1, y=2, z=3;
	int tt =time(x,y,z);
	int a=2, b=3, c= 4;
	int t= time(a,b,c);
	int difference = t-tt;
	printf("The difference in time is %d seconds", difference);
    return 0;
}


int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b;
    
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}

int time( int h, int m, int s){
	return h*3600+m*60+s;
} 
