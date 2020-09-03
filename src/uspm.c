#include <stdio.h>
#include <stdlib.h>

/*
   Author: okistuff/epic boi
   Date Created: September 1, 2020
   Last Updated on: September 1, 2020
   Project Name: USPM (Unoffical Sand Package Manager)
   File Name: uspm-global.c
   Description: 
      Unoffical Package Manager that uses git for the Sand Programming

*/


int main( int argc, char *argv[] ) {
    printf("USPM v0.1.0 -- [GLOBAL]\n");
    printf("Loading: Please Stand By\n");

    FILE *fptr;
    char globalDir [256];

    fptr = fopen("sand.global","r");
    fscanf(fptr, "%s", globalDir);

    char git [256];


    sprintf( git, "git clone %s %s/std/libs/%s/", argv[1], globalDir, argv[2]);
    printf("echo Warning: Make sure Git is working");
    printf("Exiting Now..");

    system(git);
    fclose(fptr);
}