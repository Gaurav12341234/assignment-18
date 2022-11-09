//8. Write a function to count words in a given string.
#include<stdio.h>
int words(char[]);
int main()
{
    char s[50];
    int c;
    printf("Enter a string:");
    fgets(s,50,stdin);
    c=words(s);
    printf("Total words in a given string is: %d",c);
    return 0;
}
int words(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==' '&&str[i+1]!=' ')
            count++;
    }
    return count+1;
}