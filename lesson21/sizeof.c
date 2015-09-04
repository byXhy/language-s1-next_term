/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : sizeof.c
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
 * \brief  int* p
 */

#include <stdio.h>

int main(void)
{   
    int  a = 3;
    int* p = &a;
    printf("a   = %d  p = %08x\n",  a, p);
    printf("*p  = %d  p = %08x\n", *p, p);

    *p = 9;
    printf("a   = %d  p = %08x\n",  a, p);


    printf("\n");
    char*   pC;
    short*  pS;
    int*    pI;
    long*   pL;
    double* pD;
    printf("pC  = %d\n", sizeof pC);
    printf("pS  = %d\n", sizeof pS);
    printf("pI  = %d\n", sizeof pI);
    printf("pL  = %d\n", sizeof pL);
    printf("pD  = %d\n", sizeof pD);

    return 0;
}

/* end of file */
