/*
small alphabet 97 to 122
big alphabet 65 to 90
digit 48 to 57
spical symbol 32 to 47 || 58 to 64 ||91 to 95 || 123 to 126
otherwise function
*/
#include<stdio.h>
main()
{
    int  num;
    char ch;
    printf("enter a number\n");
    scanf("%c",&ch);
    if(ch>='a'||ch>='z')
    {
        printf("small letter  character");
    }
    else

        printf(" capital letter character");


}
