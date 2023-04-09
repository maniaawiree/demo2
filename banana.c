#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define fruitsize 15
int main(){

    char fruit[fruitsize+1];
    fruit[fruitsize] = '\0';
    strcpy(fruit, "banana");

    for (int i =0; fruit[i] != '\0'; i++){
       for (int j = 1; j < i+1; j++){
        putchar('\t');
       }
       printf("%c", fruit[i]);
    }

    return 0;
}