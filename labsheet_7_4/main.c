#include <stdio.h>
#include <stdlib.h>

void area(float* r);
int main()
{
    float r;
    printf("Please enter the radius of circle: ");
    scanf("%f", &r);

     area(&r);

    return 0;
}

void area(float *r)
{
    const float pi = 3.1416;
    float A,C;
    A = (pi*(*r)*(*r));
    C= (2*(pi)*(*r));
    printf("The area of circle: %.2f\n",A);
    printf("The perimeter of circle: %.2f",C);

}
