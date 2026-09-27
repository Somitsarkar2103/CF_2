#include <stdio.h>
 
int main()
{
    int a, b;
    int years = 0;
 
    scanf("%d %d", &a, &b);
 
    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        years++;
    }
 
    printf("%d", years);
 
    return 0;
}