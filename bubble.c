#include <stdio.h>
const int MAX=9;

void printValues(int*pbubble);
void sort(int*psort);
void swap(int*a, int*b);


void printValues(int* pbubble) {

	printf("[");
	for(int i =0; i< MAX; i++){

		printf("%d " , pbubble[i]); 
	}
	printf("]\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *psort) {
    int i, j;
    for (i = 0; i < MAX - 1; i++) {
        for (j = 0; j < MAX - 1; j++) {
            if (psort[j] > psort[j + 1]) {
                swap(&psort[j],&psort[j+1]);
	      	printValues(psort);
            }
        }
    }
}



int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main
