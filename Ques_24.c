// a part

/*
#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z')
        printf("this is Upper case");
    else
        printf("this is lower case");
    return 0;
}
*/


// b part

#include<stdio.h>
int main()
{
    char cha;
    printf("enter any charater");
    scanf("%c",&cha);
    if (cha>='A'&& cha<='Z' || cha>='a'&& cha<='z')
        printf("this is not special symbol");
    else 
        printf("this is special symbol");
}
