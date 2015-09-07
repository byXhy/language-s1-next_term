/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : strncpy.c
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
 * \brief  strncpy
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

char* strncpy1(char* dst, const char* src, size_t len)
{
    char* ret = dst;

    assert(dst && src);

    while (len--){
        *dst++ = *src++;
    }

    *dst = '\0';

    return ret;
} 

int main(void)
{     
    char dst[10] = {0};
    char a[] = {'a', 'b', '\0'};
    char b[] = {'x', 'y'};

    printf("strncpy(dst,  b) = %s\n", strncpy(dst, b, 2));  //xy
    DIV_LINE;

    printf("strncpy1(dst, a) = %s\n", strncpy1(dst, a, 3)); //ab
    DIV_LINE;

    printf("strncpy1(a,   b) = %s\n", strncpy1(a, b, 2));   //ab
    DIV_LINE;

    return 0;
}

/* end of file */
