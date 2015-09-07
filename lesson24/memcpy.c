/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : memcpy.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-06-2015
 *
 *      Description: just for test (May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  memcpy
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(i, n) for(i=0; i<n; i++)

char* memcpy1(void* dst, const void* src, size_t count)
{
    assert(dst && src);
    assert(count > 0);

    char* pdst = (char*)dst;
    char* psrc = (char*)src;

    while (count--){
        *pdst++ = *psrc++;
    }

    return dst;
    //return pdst;   // need to return the dst's first address 
} 

int main(void)
{     
    char a[20] = {0};
    char b[]   = "what are you ?";

    int c[10] = {0};
    int d[5]  = {1, 2, 3, 4, 5};

    int i = 0;

    printf("memcpy1(a, b, strlen(b)) = %s\n", memcpy1(a, b, strlen(b)));
    DIV_LINE;

    printf("memcpy1(a, b, strlen(b)) = %s\n", memcpy1(a, b+5, strlen(b)));
    DIV_LINE;

    printf("memcpy (a, b, strlen(b)) = %s\n", memcpy(a, b, strlen(b)));
    DIV_LINE;

    memcpy(c, d, 20);
    EACH(i, 5)
        printf("memcpy (c, d, 5) = %d\n", a[i]);
    DIV_LINE;

    return 0;
}

/* end of file */
