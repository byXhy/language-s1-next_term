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

#define DIM(array) (sizeof(array) / sizeof(*array))

#define EACH(n) for(i=0; i<n; i++)

int main(void)
{   
    char s1[] = {'H', 'e', 'l', 'l', 'o'};

    char s3[] = {'H', 'e', '\0', 'l', 'o'};
    
    char s2[] = {'W', 'r', 'o', 'l', 'd'};

    char i = 0;      //char i = 0;

    char s3[] = "Xhy";

    printf("DIM(s1) = %d  %s\n", DIM(s1), s1);

    DIV_LINE;
    printf("DIM(s2) = %d  %s\n", DIM(s2), s2);

    DIV_LINE;
    printf("DIM(s3) = %d  %s\n", DIM(s3), s3);

    return 0;
}

/* end of file */
