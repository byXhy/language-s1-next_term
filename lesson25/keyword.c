/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : keyword.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-07-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  look up the keyword  by pointer array
 */

#include <stdio.h>
#include <string.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(i, n) for(i=0; i<n; i++)

#define DIM(a) (sizeof(a) / sizeof(*a))

int lookup_keyword(const char* key, const char* table[], size_t size)
{
    int ret = -1;

    int i = 0;

    EACH(i, size) {
        printf("table[%d] = %s\n", i, table[i]);

        if (0 == strcmp(key, table[i])) {
            ret = i;
            break;
        }
    }

    return ret;
}

int main(void)
{   
    int i = 0;

    const char* keyword[] = {
        "do", 
        "for",
        "if",
        "else",
        "switch",
        "static",
        "int",
        "char",
        "while"
    };
   
    EACH(i, DIM(keyword)) {
        printf("keyword[%d] = %s\n", i, keyword[i]);
    }
    DIV_LINE;

    printf("i = %d\n", lookup_keyword("char",   keyword, DIM(keyword)));
    DIV_LINE;

    printf("i = %d\n", lookup_keyword("double", keyword, DIM(keyword)));
    DIV_LINE;

    return 0;
}

/* end of file */
