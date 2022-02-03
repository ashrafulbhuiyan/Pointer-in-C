#include <stdio.h>
#include <stdlib.h>

void cl(int*);
int main()
{
    int x=1;
    cl(&x); //here passed address of x

    printf("%d",x);

    return 0;
}

void cl(int *a)
{
    *a=3; // 3 puted where a is pointing.
}
