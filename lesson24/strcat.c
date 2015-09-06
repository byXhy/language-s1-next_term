/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : strcat.c
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
 * \brief  strcat
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define DIM(array) (sizeof(array) / sizeof(*array))

char* strcat1(char* dst, const char* src)
{
    char* ret = dst;

    assert(dst && src);

    //while ( (*dst++) != '\0' ); //why not ???
    while ( *dst != '\0' ) {
        *dst++;
    }

    while ( (*dst++ = *src++) != '\0' );

    return ret;
} 

int main(void)
{     
    char a[3] = {'H', 'e', '\0'};   // DIM(a) -strlen(a) > DIM(b)
    char b[]   = {'l', 'l', 'o', '\0'};

    char* c = "xhy";
    char* d = "is nihao !";

    printf("strcat1(a,  b) = %s\n", strcat1(a, b)); //Hello
    printf("DIM(a) = %d   strlen(a) = %d\n", DIM(a), strlen(a)); 
    DIV_LINE;  // DIM(a) = 3   strlen(a) = 5

    printf("strcat (a,  b) = %s\n", strcat(a, b)); //Hellollo 
    printf("DIM(a) = %d   strlen(a) = %d\n", DIM(a), strlen(a)); 
    DIV_LINE;  // DIM(a) = 3   strlen(a) = 8

    printf("strcat1(a,  b) = %s\n", strcat1(c, d)); //only read (segmentation)
    DIV_LINE;

    printf("strcat (a,  b) = %s\n", strcat(c, d));  //only read (segmentation)
    DIV_LINE;
    return 0;
}

/* end of file */
