/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : string.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-06-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  string
 */

#include <stdio.h>
#include <malloc.h>
#include <string.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define DIM(array) (sizeof(array) / sizeof(*array))

#define EACH(i, n) for(i=0; i<n; i++)

int main(void)
{   
    char  s1[] = {'H', 'e', 'l', 'l', 'o'};  
    char  s2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char* s3   = "Hello";
    char* s4   = (char*)malloc(6 * sizeof(char));
    char  s5[] = {'H', 'e', 'l', '\0', 'o', '\0'};
    int i = 0;

    printf("%d, %d, %d, %d, %d\n", DIM(s1), DIM(s2), DIM(s3), DIM(s4), DIM(s5));
    printf("%d, %d, %d, %d, %d\n", strlen(s1), strlen(s2), strlen(s3), strlen(s4), strlen(s5));
    DIV_LINE;

    EACH(i,5) {
        printf("s1[%d] = %c\n", i, s1[i]);
        printf("s1 = %s\n", s1);
    }
    DIV_LINE;

    EACH(i,6) {
        printf("s2[%d] = %c\n", i, s2[i]);
        printf("s2 = %s\n", s2);
    }
    DIV_LINE;

    EACH(i,6) {
        printf("s3[%d] = %c\n", i, s3[i]);
        printf("s3 = %s\n", s3);
    }
    DIV_LINE;

    EACH(i,6) {
        printf("s4[%d] = %c\n", i, s4[i]);
        printf("s4 = %s\n", s4);
    } 

    EACH(i,6) {
        printf("s5[%d] = %c\n", i, s5[i]);
        printf("s5 = %s\n", s4);
    }  
    DIV_LINE;

    //s3[3] = 'x';    //Segmentation fault
    DIV_LINE;

    return 0;
}

/* end of file */
