//5. Write a function to transform a string into lowercase.
#include<stdio.h>
void lower(char[]);
int main()
{
    char str[20];
    printf("Enter a string:");
    fgets(str,20,stdin);
    printf("Transform string into Lower case:");
    lower(str);
    return 0;
}
void lower(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<'Z')
            s[i]=s[i]+32;
    }
    printf("%s",s);
}