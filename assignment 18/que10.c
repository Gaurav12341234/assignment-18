//10. Write a function to find the repeated character in a given string.
#include<stdio.h>
void repeated(char[]);
int main()
{
    char s[20];
    printf("Enter a string: ");
    fgets(s,20,stdin);
    printf("Repeated characters is:");
    repeated(s);
    return 0;
}
void repeated(char str[])
{
    int temp[150]={0};
    int i;
    for(i=0;str[i];i++)
        temp[str[i]]++;
    for(i=0;i<150;i++)
        if(temp[i]>1)
            printf("%c,",i);
}