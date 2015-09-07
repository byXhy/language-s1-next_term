/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : memset.c
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
 * \brief  memset
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <memory.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(i, n) for(i=0; i<n; i++)

char* memset1(void* src, const int c, size_t count)
{
    assert(src);
    assert(count > 0);

    char* psrc = (char*)src;

    while (count--){
        *psrc++ = (char*)c;
    }

    return src;
    //return psrc;   // need to return the src's first address 
} 

int main(void)
{     
    char a[] = "hello xhy";
    char b[] = "what are you ?";

    printf("memset1(a,\"0\", strlen(a))= %s\n", memset1(a, 'x', strlen(a)));
    DIV_LINE;

    printf("memset(b, \"c\", strlen(b))= %s\n", memset(b, 'c', strlen(b)));
    DIV_LINE;

    return 0;
}

/* end of file */
