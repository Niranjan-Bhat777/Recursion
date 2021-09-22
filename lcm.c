#include <stdio.h>
int lcm(int a, int b);
void main()
{
    int a, b, result;
    int prime[100];
 
    printf("Input First number:  ");
    scanf("%d", &a);
    printf("Input Second number:  ");
    scanf("%d", &b);
    
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
}
 
int lcm(int a, int b)
{ 
    static int common = 1;
 
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
