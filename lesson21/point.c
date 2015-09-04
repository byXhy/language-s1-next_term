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
 *      Date       : 09-04-2015
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
    
    int  a = 3;
    int* p = &a;
    printf("a   = %d  p = %08X\n",  a, p);
    printf("*p  = %d  p = %08X\n", *p, p);

    *p = 9;
    printf("a   = %d  p = %08X\n",  a, p);
    printf("------------------------------------------------------\n");


    printf("\n");
    char*   pC;
    short*  pS;
    int*    pI;
    long*   pL;
    float*  pF;
    double* pD;

    int b = 7;
    pI = &b;

    /* pI vs & pI ?? */
    printf("pI  = %0X &pI  = %0X &b = %0X \nb   = %d   *pI  = %d\n", pI, &pI, &b, b, *pI);
    printf("------------------------------------------------------\n");

    printf("\n");
    printf("sizeof(int*)   = %d sizeof(pI) = %d &pI = %0X\n", sizeof(int*),   sizeof(pI), &pI);
    printf("sizeof(char*)  = %d sizeof(pC) = %d &pC = %0X\n", sizeof(char*),  sizeof(pC), &pC);
    printf("sizeof(short*) = %d sizeof(pS) = %d &pS = %0X\n", sizeof(short*), sizeof(pS), &pS);
    printf("sizeof(long*)  = %d sizeof(pL) = %d &pL = %0X\n", sizeof(long*),  sizeof(pL), &pL);
    printf("sizeof(float*) = %d sizeof(pF) = %d &pF = %0X\n", sizeof(float*), sizeof(pF), &pF);
    printf("sizeof(double*)= %d sizeof(pD) = %d &pD = %0X\n", sizeof(double*),sizeof(pD), &pD);
    printf("------------------------------------------------------\n");

    /*
    printf("\n");
    *((int*)0xBFAB79) = 100;
    printf("*((int*)0xBFAB793C) = %d\n", *((int*)0xBFAB793C));
    */


    return 0;
}

/* end of file */
