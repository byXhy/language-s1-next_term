/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : const.c
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
 * \brief  const int* const p;
 */

#include <stdio.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

int main(void)
{   
    int a = 3;
    int b = 4;
    int c = 5;
    int d = 6;
    const int* p1 = &a;
    p1 = NULL;
    //*p1 = 5;    wrong
    
    DIV_LINE;
    int const* p2 = &b;
    p2 = NULL;
    //*p2 = 5;    wrong
    
    DIV_LINE;
    int* const p3 = &c;
    //p3 = NULL;  wrong
    *p3 = 5;    
    
    DIV_LINE;
    const int* const p4 = &d;
    //p3 = NULL;  wrong
    //*p4 = 5;    wrong

    return 0;
}

/* end of file */
