/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : test.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-04-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  signed vs unsigned     1000   vs   0111  (88   vs   78)
 */

#include <stdio.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

int main(void)
{
    unsigned int a1 = 0x000000088;

    char* b1= (char*)&a1;

    printf("*b1 = %08x\n", *b1);
    printf("(unsigned char)a1 = %08x\n", (unsigned char)a1);
    
    DIV_LINE;
    unsigned int a2 = 0xF0000078;

    char* b2 =(char*)&a2;
    
    printf("*b2 = %08x\n", *b2);
    printf("(unsigned char)a2 = %08x\n", (unsigned char)a2);

    return 0;
}

/* end of file */
