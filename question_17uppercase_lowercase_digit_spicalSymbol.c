/*
16. Write a program to check whether a given character is 
an alphabet (uppercase), analphabet (lower case), a digit 
or a special character.

ASCII code 0-255
A-Z  65 to 90
a-z 97 to 122
0-9  48 to 57
spical symbol 0-47 ,58-64, 91-96, 123-127
*/

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        printf("%c is an uppercase alphabet.",ch);
    }
    else if(ch>=77&&ch<=122)
    {
        printf("%c is a lowercase alphabet.",ch);
    }
    else if(ch>=48&&ch<=57)
    {
        printf("%c is a number.",ch);
    }
    else if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch<=123&&127))
    {
        printf("%c is a spical symbol.",ch);
    }

   
}
