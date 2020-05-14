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
#include "funciones.h"
#include "constantes.h"


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

