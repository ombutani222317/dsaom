

/*
    AND => when first digit 0 than no check condition
    OR => when first digit 1 than no check condition
*/

#include<stdio.h>
int main()
{
    // int a = 0, b = 0,c = 1, d;
    //d = ++a && ++b || c;
    // printf("a: %d, b: %d, c: %d, d: %d", a, b, c, d);
    // d = ++a && ++b && c;
    // printf("a: %d, b: %d, c: %d, d: %d", a, b, c, d);


    // int a = -2, b = -1,c ;
    // c = ++a || ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = ++a || b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = a  || ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = --a  || ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = a || b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = --a && ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = --a && b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = a && ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = ++a && ++b;
    // printf("a: %d, b: %d, c: %d", a,b,c);
    // c = a && b;
    // printf("a: %d, b: %d, c: %d", a,b,c);


    int a=15;
    // printf("a:%d,a:%d,a:%d,a:%d",++a,a++,++a,a);
    // printf("a:%d,a:%d,a:%d,a:%d",++a,++a,++a,++a);
    printf("a:%d,a:%d,a:%d,a:%d",++a,a,a++,++a);


    }