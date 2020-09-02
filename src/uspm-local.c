#include <stdio.h>
#include <stdlib.h>

/*
   Author: okistuff/epic boi
   Date Created: September 1, 2020
   Last Updated on: September 1, 2020
   Project Name: USPM (Unoffical Sand Package Manager)
   File Name: uspm.c
   Description: 
      Unoffical Package Manager that uses git for the Sand Programming

*/

int main( int argc, char *argv[]) {
    
    printf("USPM v0.1.0 -- [LOCAL: [CUR-DIR]/libs/]\n");
    printf("Loading: Please Stand By\n");

    char i [256];
    char git [256];
    char x [256];

    sprintf( git, "git clone %s libs/%s/", argv[1], argv[2]);
    sprintf(i, "echo Warning: Make sure Git is working");
    sprintf(x, "echo Exiting Now..");

    system(i);
    system(git);
    system(x);
}