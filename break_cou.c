// HOW TO USE BREAK AND CONTINOU:
#include<stdio.h>
int main(){
    for(int i=9;i<10;i--){
        printf("%d \n",i);
        if (i==2)
        {
            break;                             //BREAK
        }
        
    }
}


int main(){
  for(int j=1;j<=10;j++){
    if (j==5)
    {
      continue;                                 //CONTINUE EXAMPLE

    }
    printf("%d \n",j);
    
  }
}


// Insertion sort in C

// #include <stdio.h>


// void printArray(int array[], int size) {
//   for (int i = 0; i < size; i++) {
//     printf("%d ", array[i]);
//   }
//   printf("\n");
// }

// void insertionSort(int array[], int size) {
//   for (int step = 1; step < size; step++) {
//     int key = array[step];
//     int j = step - 1;

  
//     while (key < array[j] && j >= 0) {
//       array[j + 1] = array[j];
//       --j;
//     }
//     array[j + 1] = key;
//   }
// }


// int main() {
//   int data[] = {9, 5, 1, 4, 3};
//   int size = sizeof(data) / sizeof(data[0]);
//   insertionSort(data, size);
//   printf("Sorted array in ascending order:\n");
//   printArray(data, size);
// }