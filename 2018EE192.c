#include<stdio.h>

unsigned value;
unsigned n;
unsigned p;

void displayBits( unsigned value ); 
unsigned power2(unsigned n,unsigned p);

int main()
{
	unsigned number;
	unsigned pow;
	unsigned result;
	int a[2][2], b[2][2], final[2][2],i, j, k;
	printf( "number = " ); 
	scanf( "%u", &number );
	
	printf( "pow = " ); 
	scanf( "%u", &pow );

	
	result = power2( number, pow ); 
	

	multiplicationOfMatrix();
	printf( "\n\nResult of 1st task = %u\n",result );
	 printf("\nProduct of matrices=");
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            printf("%d  ", final[i][j]);
            if(j == 2-1);
        }
	
	return 0;
}

unsigned n;
unsigned p;
unsigned power2( unsigned n,unsigned p)
{
	return n<<p;
}

multiplicationOfMatrix(){

	int a[2][2], b[2][2], final[2][2],i, j, k;	
    printf("Elements of 1st matrix=");
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            scanf("%d", &a[i][j]);
        }

    printf("Elements of 2nd matrix=");
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            scanf("%d",&b[i][j]);
        }

    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            final[i][j] = 0;
        }

    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
            for(k=0; k<2; ++k)
            {
                final[i][j]+=a[i][k]*b[k][j];
            }

   
}


