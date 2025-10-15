#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       It is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Avadhoot Subhash Pawar
//  Date :              10/10/2025
//
////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    
    return 0;
}