/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : typedef.c
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
 * \brief  typedef type(name)[size]
 * \brief  AFLOAT10* pf  vs   int(*pf)[10]  vs  char(*pc)[9] 
 */

#include <stdio.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(i, n) for(i=0; i<n; i++)

typedef char(ACHAR9)[9];
typedef int(AINT5)[5];
typedef float(AFLOAT10)[10];

int main(void)
{   
    AINT5 a1;
    float fArray[10];

    AFLOAT10* pf = &fArray;
    //AFLOAT10* pf = fArray;    //‘float*’ to ‘float (*)[10]

    ACHAR9 cArray;
    char(*pc)[9]  = &cArray;
    char(*pcw)[4] = &cArray;    //char (*)[9]’ to ‘char (*)[4]
    //char(*pcw)[4] = cArray;   //‘char*’ to ‘char (*)[4]’
    
    int i = 0;

    printf("%d,   %d\n", sizeof(AINT5), sizeof(a1));
    DIV_LINE;

    EACH(i, 10)
        (*pf)[i] = i;

    EACH(i, 10)
        printf("fArray[%d] = %f\n", i, fArray[i]);
    DIV_LINE;

    printf("%0X, %0X, %0X\n", &cArray, pc+1, pcw+1);
    DIV_LINE;

    printf("%0X, %0X, %0X\n", 
           &cArray, 
           (unsigned int)pc  + 1 * (sizeof(*pc)), 
           (unsigned int)pcw + 1 * (sizeof(*pcw)));
    DIV_LINE;

    printf("%0X, %0X, %0X\n", 
           &cArray, 
           pc  + 1 * (sizeof(*pc)),       //wrong (unsigned int)
           pcw + 1 * (sizeof(*pcw)));     //wrong (unsigned int)
    DIV_LINE;

    return 0;
}

/* end of file */
