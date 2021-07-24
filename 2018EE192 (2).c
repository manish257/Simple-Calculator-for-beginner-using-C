#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], final[2][2],i, j, k;


    printf("Elements of 1st matrix=");
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            scanf("%d", &a[i][j]);
        }

    printf("\nElements of 2nd matrix=");
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

    printf("\nProduct of matrices=");
    for(i=0; i<2; ++i)
        for(j=0; j<2; ++j)
        {
            printf("%d  ", final[i][j]);
            if(j == 2-1);
        }
    return 0;
}
