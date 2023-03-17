#include<stdio.h>
#include<stdlib.h>
int *g(void)
{
    int *x ;
    //*x = (int)malloc(sizeof(int));
    *x = 10;
   return(x);

}
int  main()
{
   int r = 10;
   printf("%d",*g());
}