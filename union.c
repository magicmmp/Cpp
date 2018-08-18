#include <stdio.h>
 
typedef union{
 char c;
 int a;
 int b;
} Demo;
 
int main(int argc, char **argv)
{
 Demo d;
 d.c = 'H';
 d.a = 10;
 d.b = 12;
 d.c='A';
 printf("this union size: %d\n", sizeof(d));
 printf("d.c=%c, d.a=%d, d.b=%d\n", d.c, d.a, d.b);
 
 return 0;
}
