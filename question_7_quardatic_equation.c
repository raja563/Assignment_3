/* 7. Write a program to check whether roots of a given quadratic
 equation are real & distinct, real & equal or imaginary roots */
 #include<stdio.h>
 int main()
 {
    double a,b,c,discriminant;
    printf("enter cofficients a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);

    /*ax^2+bx+c=0
    x=value of roots

    */
    discriminant=b*b-4*a*c;

    if(discriminant>0)
    {
        printf("real and distinct\n");
    }
    else if(discriminant==0)
    {
        printf("real and different.\n");

    }
    else
    printf("real and not real.\n");
    return 0;
 }
