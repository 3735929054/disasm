#include <stdio.h>
 
int main(void)
{
    int lhs = 0, rhs = 0;
 
    double dResult = 0.0f;
    int iResult = 0;
    char chResult = 0;
 
    lhs = 2;
    rhs = 3;
 
    dResult  = lhs / rhs;
    iResult  = lhs * rhs;
    chResult = lhs + rhs;
 
    printf("[ %lf ]\n[ %d ]\n[ %c ]\n",
            dResult, iResult, chResult);
 
    return 0;
}