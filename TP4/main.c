/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: maga
 *
 * Created on May 13, 2020, 9:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

#define OK 0
#define FAIL 1
#define MAX_LETTERS

int palindrome(char string[MAX_LETTERS],int cant);
/*
 * 
 */
int main(int argc, char** argv) {

    char string[MAX_LETTERS]="anana";
    int cant=5;
    int pal=0;
    
    pal= palindrome(string,(cant-1));
    if (pal==0)
    {
        printf("Es palindromo\n");
    }

    else
    {
        printf("No es palindromo\n");
    }
    return 0;
}

int palindrome(char string[MAX_LETTERS],int cant)
{
    char *p1=&string[0];
    char *p2=&string[cant];
    
    if (p2<=p1)
    {
        if((*p2)==(*p1))
        {
            printf("Caso inicial: %c\n",(*p2));
            return OK;
        }
        else
        {
            printf("Caso inicial fallo: p2=%c\tp1=%c\n",(*p2), (*p1));
            return FAIL;
        }
    }
    else
    {
        if((*p2)==(*p1))
        {
            printf("Caso letra: %c\n",(*p2));
            printf("Caso cant: %d\n",cant);
            return OK+palindrome((string+1),(cant-2));
        }
        else
        {
            printf("Caso letra fallo: p2=%c\tp1=%c\n",(*p2), (*p1));
            printf("Caso cant: %d\n",cant);
            return FAIL;
        }
    }
}