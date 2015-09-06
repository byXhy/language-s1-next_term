/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : point.c
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
 * \brief  p1 - p2
 */

#include <stdio.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

int main(void)
{   
    char s1[] = {'H', 'e', 'l', 'l', 'o'};
    int i = 0;
    char s2[] = {'W', 'r', 'o', 'l', 'd'};

    char* p0 = s1;
    char* p1 = &s1[3];
    char* p2 = s2;
    int*  p  = &i;

    printf("%d\n", p0 - p1);

    DIV_LINE;
    printf("%d\n", ((unsigned int)p0 - (unsigned int)p1) / sizeof(char));

    //printf("%d\n", p0 + p2);
    printf("%d\n", p0 - p2);    //memory duiqi
    //printf("%d\n", p0 - p);
    //printf("%d\n", p0 * p2);
    //printf("%d\n", p0 / p1);

    return 0;
}

/* end of file */
