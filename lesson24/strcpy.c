/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : strcpy.c
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
 * \brief  strcpy
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

char* strcpy1(char* dst, const char* src)
{
    char* ret = dst;

    assert(dst && src);

    while( (*dst++ = *src++) != '\0' );

    return ret;
} 

int main(void)
{     
    char dst[10] = {0};
    char a[] = {'a', 'b', '\0'};
    char b[] = {'a', 'b'};

    printf("strcpy(dst, b) = %s\n", strcpy(dst, b)); //abab
    DIV_LINE;

    printf("strcpy1(dst, a) = %s\n", strcpy1(dst, a)); //ab
    DIV_LINE;

    printf("strcpy1(dst, b) = %s\n", strcpy1(dst, b)); //abab
    DIV_LINE;

    printf("strcpy1(dst, NULL) = %s\n", strcpy1(dst, '\0')); //assert();
    DIV_LINE;

    printf("strcpy1(dst, NULL) = %s\n", strcpy1(dst, NULL)); //assert();
    DIV_LINE;

    printf("strcpy(dst, NULL) = %s\n", strcpy(dst, NULL)); //segmentation fault
    DIV_LINE;

    return 0;
}

/* end of file */
