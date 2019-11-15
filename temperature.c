#include<stdio.h>
#include<math.h>

int main()

{
    float f,c;
    printf("Fahrenheit temperature:  ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("\ncelcius temperature is %f ",c);
}
