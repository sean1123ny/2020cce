#include<stdio.h>
unsigned char c;
typedef unsigned char unchar;
unchar d;
int main()
{
    c='A';
    d = c;
    printf("%c", d);
}