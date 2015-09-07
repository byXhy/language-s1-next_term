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
 *      Date       : 09-07-2015
 *
 *      Description: 
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  
 */

#include <stdio.h>

int main(void)
{   
    int array[5];
    int matrix[3][3];

    int* pA = array;

    //int* pM = matrix;  //‘int (*)[3]’ to ‘int*’

    printf("%0X\n", pA);

    return 0;
}

/* end of file */
