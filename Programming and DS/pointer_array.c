#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="gate2022";
    for(int i=0;i<strlen(a);i++)
    {
        //both will work same
        printf("%c\n",i[a]);
        printf("%c\n",a[i]);
    }
} 