#include <stdio.h>

int blackjack(int array[], int len, int target)
{
    int i, j, k;
    int max=0, sum=0;
    for (i=0; i<len; i++)
        for(j=i+1; j<len; j++)
            for(k=j+1;k<len; k++)
            {    sum=array[i]+array[j]+array[k];
                if(sum<=target && sum>max)
                    max=sum;
            }
    return max;
}


int main(void) {
    int N, M, i, array[100];
    scanf("%d %d",&N, &M);
    for(i=0;i<N;i++)
        scanf("%d",&array[i]);
    printf("%d",blackjack(array,N,M));
    return 0;
}
