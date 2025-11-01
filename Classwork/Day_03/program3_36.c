#include<stdio.h>

void Display(int iNo)   // Dynamic Function
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);   // Dynamic Loop
    }

    printf("\n");
}

int main()
{
    Display(7);
    
    return 0;
}