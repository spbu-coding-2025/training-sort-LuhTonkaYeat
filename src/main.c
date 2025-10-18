#include <stdio.h>

void sort(int array[], int count){
    for (int i = 0; i < count -1; i++){
        for (int j = 0; j < count - i - 1; j++){
            if (array[j] > array[j + 1]){
                int t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    } 
}

int main(){
    int numbers[100] ;
    int num = 0;
    for (; scanf("%d", &numbers[num]) == 1 && num < 100; ){
        num++;
    }

    sort(numbers, num);

    for (int i = 0; i < num; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}