#include <stdio.h>
int main()
{
    int N;
    printf("Enter your marks : ");
    scanf("%d", &N);
    // mark n>80 -> grade A
    // mark n>60 -> grade B
    // mark n>40 -> grade C
    // mark n>80 -> grade D
    if (N > 80)
    {
        printf("A grade mark is : %d\n",N);
    }
    else if (N > 60)
    {
        printf("B grade mark is : %d\n",N);
    }
    else if (N > 40)
    {
        printf("C grade mark is : %d\n",N);
    }
    else
    {
        printf("Fail");
    }
    return 0;
}