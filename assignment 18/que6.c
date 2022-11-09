//6. Write a function to check whether a given string is an alphanumeric string or not. 
//   (Alphanumeric string must contain at least one alphabet and one digit)
#include<stdio.h>
void alpha(char[]);
int main()
{
    char s[20];
    printf("Enter a string:");
    fgets(s,20,stdin);
    alpha(s);
    return 0;
}
void alpha(char str[])
{
    int i,p=0,q=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            p=1;
        if(str[i]>='0'&&str[i]<='9')
            q=1;
    }
    if(p==1&&q==1)
        printf("Alphanumeric string");
    else
        printf("Not Alphanumeric string");
}