/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/
#include<stdio.h>
main()
{
    int total_marks=500;
    float hindi,english,science,math,art;
    float marks,percent;
    printf("Total_marks:%d\n",total_marks);
    printf("enter your obtained marks:\n");
    printf("Hindi:");
    scanf("%f",&hindi);
    printf("English:");
    scanf("%f",&english);
    printf("Science:");
    scanf("%f",&science);
    printf("Math:");
    scanf("%f",&math);
    printf("Art:");
    scanf("%f",&art);
    marks=hindi+english+science+math+art,
    percent=(marks*100)/total_marks;
    if(percent<33)
    {
    printf("you are failed !\n");
    }
    else
    {
    printf("you are passed !\n");
    printf("your total obtained mark :%.2f\n",marks);
    printf("you have got %.2f%%",percent);
    }
    getch();
    return 0;

    
}