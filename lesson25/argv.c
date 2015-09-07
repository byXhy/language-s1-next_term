/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : argv.c
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
 * \brief  main(int argc, char* argv[], char* env[])
 */

#include <stdio.h>

#define EACH(i, n) for(i=0; i<n; i++)

int main(int argc, char* argv[], char* env[])
{   
    int i = 0;
    printf("===============   Begin argv   ===============\n");

    EACH(i, argc)
        printf("argv[%d] = %s\n", i, argv[i]);

    printf("===============   End   argv   ===============\n");
    printf("\n\n");

    printf("===============   Begin  env   ===============\n");

    for (i=0; env[i]!=NULL; i++)
        printf("env[%d] = %s\n", i, env[i]);

    printf("===============   End    env   ===============\n");

    return 0;
}

/* end of file */
