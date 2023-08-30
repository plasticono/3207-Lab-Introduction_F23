#include <stdio.h>
#include <stdlib.h>


char alphabet[27]="abcdefghijklmnopqrstuvwxyz";

char randchar(){
    return alphabet[rand() % sizeof(alphabet) -1];
}