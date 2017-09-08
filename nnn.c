#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    
    printf("Enterinteger: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
