#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,j,l;
    printf("Enter a string:");
    fgets(str,20,stdin);
    l=strlen(str);
    printf("Length of string is:%d\n",l);
    printf("enter repeated charter:");
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
                break;
        }
        if(j!=l)
        printf("%c",str[i]);
    }
    return 0;
}