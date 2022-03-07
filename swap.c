#include<stdio.h>
int main()
{
    int a, b,c,d, e, x;
    printf( "Enter Three integer : ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    //printf("Before Swaping a =%d, b=%d, c=%d\n",a, b, c);
    x = e;
    e = d;
    d = c;
    c = b;
    b = a;
    a = x;
    printf("After swaping a = %d, b=%d, c=%d. d=%d, e=%d", a, b, c, d, e);
    return 0;
}
