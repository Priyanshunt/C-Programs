#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float x,y;
    printf("For expression a*x^2+b*x+c.\n");
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("The two roots are:%f&%f",x,y);
}
}
