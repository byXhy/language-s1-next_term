/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : swap.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-04-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */

#include <stdio.h>

void f1(int a, int b)
{
    a = 2;
    b = 4;
    printf("a = %d  b = %d\n", a, b);
}

void f2(int* a, int* b)
{
    *a = 2;
    *b = 4;
    printf("a = %d  b = %d\n", *a, *b);
}

#define SWAP(a, b)    \
{                     \
    int t = a;        \
    a = b;            \
    b = t;            \
}

void swap1(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void swap2(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main(void)
{   
    
    int i = 7;
    int j = 9;
    printf("i = %d  j = %d\n", i, j);

    f1(i, j);
    printf("i = %d  j = %d\n", i, j);
    printf("------------------------------------------------------\n");

    printf("\n");
    f2(&i, &j);
    printf("i = %d  j = %d\n", i, j);
    printf("------------------------------------------------------\n");

    printf("\n");
    int a = 4; 
    int b = 8;
    printf("a = %d  b = %d\n", a, b);

    SWAP(a, b);
    printf("a = %d  b = %d\n", a, b);

    swap1(a, b);
    printf("a = %d  b = %d\n", a, b);

    swap2(&a, &b);
    printf("a = %d  b = %d\n", a, b); 
    printf("------------------------------------------------------\n");


    return 0;
}

/* end of file */
