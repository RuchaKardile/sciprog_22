#include<stdio.h>
#include<stdlib.h>

// allocate array
int *allocatearray(int n){
    int *a;
    a=(int *) malloc((n) * sizeof(int));
    return a;
}

// fill with ones
void fill(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        array[i]=1;
    }
}

// print array
void printarr(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        printf("a[%d]=%d\n", i, array[i]);
    }
}

// de allocate array
void freearr(int *array){
    free(array);
}

int main(void){
    int length, *p;

    printf("Arr size: \n");
    scanf("%d", &length);

    p = allocatearray(length);
    fill(p, length);
    printarr(p, length);
    freearr(p);
    p=NULL;

    return 0;
}