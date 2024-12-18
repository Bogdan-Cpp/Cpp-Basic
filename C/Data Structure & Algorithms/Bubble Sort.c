#include <stdio.h>

int main(){
    int temp = 0;
    int array[] = {6, 1, 9, 2, 4, 10, 7, 3, 8, 5};

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        for(int j = 0; j < sizeof(array) / sizeof(array[0]) - i - 1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

   for(int a = 0; a < sizeof(array) / sizeof(array[0]); a++){
     printf("%d ", array[a]);
   }
    getchar();
    return 0;
}