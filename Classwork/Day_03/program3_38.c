#include<stdio.h>

void Display(int iNo)   // Dynamic Function
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);   // Dynamic Loop
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Please enter the frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}