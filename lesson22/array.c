/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : array.c
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
 * \brief  array
 */

#include <stdio.h>
#include <string.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(n) for(i=0; i<n; i++)

int main(void)
{   
    int a[5] = {1, 2, 3, 4, 5, 6, 7};
    int b[5] = {1, 2, 3, 4, 5};
    int c[2] = {0};           // vs int c[3];
    int i = 0;
    //memset(c, 0, sizeof(c));   vs int c[2] = {0};initialize better ? ?
    printf("sizeof(a) = %d sizeof(*a) = %d\n", sizeof(a), sizeof(*a));
    
    EACH(5)
        printf("a[%d] = %d\n", i, a[i]);

    EACH(2)
        printf("b[%d] = %d\n", i, b[i]);

    DIV_LINE;

    return 0;
}

/* end of file */
