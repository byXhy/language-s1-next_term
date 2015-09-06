/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : func.c
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
 * \brief  void f(int a[]);    <--->  void f(int* a);
 * \brief  void f(int a[100]); <--->  void f(int* a);
 */

#include <stdio.h>

void f(int a[100])
{
    printf("sizeof(a) = %d\n", sizeof(a)); //???
}

int main(void)
{   
    int a[5] = {0};

    f(a);

    return 0;
}

/* end of file */
