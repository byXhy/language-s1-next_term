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

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define DIM(array) (sizeof(array) / sizeof(*array))

#define EACH(n) for(i=0; i<n; i++)

int main(void)
{   
    int a[5] = {0, 1, 2, 3, 4};    
    int i = 0;
 
    printf("sizeof(a) = %d sizeof(*a) = %d\n", sizeof(a), sizeof(*a));
    printf("sizeof(a) / sizeof(*a) = %d\n", sizeof(a) / sizeof(*a));
    
    DIV_LINE;
    printf("DIM(a) = %d\n", DIM(a));

    DIV_LINE;
    int* p = a;

    EACH(5)
        printf("a[%d] = %d  [p+%d] = %0X  [*p+%d] = %d\n",
                  i, a[i], i, p+i, i, *p+i);

    return 0;
}

/* end of file */
