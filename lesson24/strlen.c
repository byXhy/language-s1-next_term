/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : strlen.c
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
 * \brief  strlen
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

size_t strlen1(const char* s)
{
    size_t length = 0;

    assert(s);

    while( (*s++) != '\0' ) {
        length++;
    }

    return length;
} 

size_t strlen2(const char* s)
{
    return (assert(s), (*s ? (strlen2(s+1) + 1) : 0));
} 

int main(void)
{     
    printf("%d\n", strlen("NULL"));  // 4
    DIV_LINE;

    printf("%d\n", strlen1("\0"));   // 0
    DIV_LINE;
 
    printf("%d\n", strlen2("\0"));   // 0
    DIV_LINE;

    printf("%d\n", strlen1('\0'));   //assert(s);
    DIV_LINE;

    printf("%d\n", strlen2('\0'));   //assert(s);
    DIV_LINE;

    printf("%d\n", strlen1(NULL));   //assert(s);
    DIV_LINE;

    printf("%d\n", strlen2(NULL));   //assert(s);
    DIV_LINE;

    printf("%d\n", strlen(NULL));    //segmentation fault
    DIV_LINE;

    return 0;
}

/* end of file */
