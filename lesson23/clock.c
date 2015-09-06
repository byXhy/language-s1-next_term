/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : clock.c
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
 * \brief  *p1++ = *p2++;  >>   a[i] = b[i];
 */

#include <stdio.h>
#include <time.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

#define EACH(i, n) for(i=0; i<n; i++)

int main(void)
{   
    clock_t start;
    clock_t end;

    int a[10000];
    int b[10000];

    int* pEnd = &a[10000];
    int* pa = NULL;
    int* pb = NULL;

    int i = 0;
    int k = 0;

    start = clock();

    EACH(k, 10000) {
        EACH(i, 10000)
           b[i] = a[i];  //(unsigned int)a + i * sizeof(int)   
    }

    end   = clock();

    printf("Inedx Timing = %d\n", end - start);

    DIV_LINE;
    start = clock();
    
    EACH(k, 10000) {
        for(pa=a, pb=b; pa<pEnd;) {
            *pb++ = *pa++; //*pa++    ++4
        }
    }

    end = clock();

    printf("Pointer Timeing = %d\n", end - start);

    return 0;
}

/* end of file */
