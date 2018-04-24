/***********************
Damian Mietus
Reddit Daily Programmer
Challenge #320 [Easy] Spiral Ascension
***********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

    if (argc != 2){
        printf("Incorrect parameters. Please execute the application and the number to be spiraled\n");
        return 0;
    }

    int val = atoi(argv[1]); //spiral numb

    int arr[val][val];
    int  i = 0;
    int j = 0;

    for (i = 0; i < val; i++){
        for (j = 0; j < val; j++){
            arr[i][j] = 0;
        }
    }

    int end = val*val;
    int k = 1;
    i = 0;
    j = 0;

    arr[i][j] = k;
    k++;
    while (k != end+1){

        if (arr[i][j+1] == 0 && (j+1)!= val){
            while (arr[i][j+1] == 0 && (j+1)!= val){
                j++;
                arr[i][j] = k;
                k++;
            }
        }

        else if(arr[i+1][j] == 0 && (i+1)!=val){
            while(arr[i+1][j] == 0 && (i+1)!=val){
                i++;
                arr[i][j] = k;
                k++;
            }
        }

        else if (arr[i][j-1] == 0 && (j-1)!= -1){
            while (arr[i][j-1] == 0 && (j-1)!= -1){
                j--;
                arr[i][j] = k;
                k++;
            }
        }

        else if(arr[i-1][j] == 0 && (i-1)!= -1){
            while(arr[i-1][j] == 0 && (i-1)!= -1){
                i--;
                arr[i][j] = k;
                k++;
            }
        }

    }

    for (i = 0; i < val; i++){
        for (j = 0; j < val; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


  return 0;
}
