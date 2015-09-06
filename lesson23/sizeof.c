/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : sizeof.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-05-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  a + 1   vs   &a + 1
 */

#include <stdio.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

int main(void)
{   
    int a[5] = {0};

    printf("a = %0X   sizeof(a) = %d\n", a, sizeof(a));

    DIV_LINE;
    printf("a+1 = %0X\n", a+1);
    printf("(unsigned int)a+sizeof(*a) * 1 = %0X\n",
            (unsigned int)a+sizeof(*a) * 1);

    DIV_LINE;
    printf("&a+1 = %0X\n", &a+1);
    printf("(unsigned int)(&a)+sizeof(*&a) * 1= %0X\n",
            (unsigned int)(&a)+sizeof(*&a) * 1);

    return 0;
}

/* end of file */
