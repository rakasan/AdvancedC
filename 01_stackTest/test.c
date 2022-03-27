#include <stdio.h>


char * test()
{
    char x[] = "apple";
    return x;
}

int main()
{
    char *t;


    t = test;

   printf(t);
    return 0;
}
