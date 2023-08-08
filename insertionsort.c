#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}
void insertionsort(int array[],int size)
{
    for(int step=1;step<size;step++)
    {
        int key=array[step];
        int j=step-1;
        while(key<array[j]&&j>=0)
        {
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
    }

}
void main() {
  int array[] = {9, 5, 1, 4, 3};
  int size = 5;
  insertionSort(array, size);
  printf("Sorted array in ascending order:\n");
  printArray(array, size);

}