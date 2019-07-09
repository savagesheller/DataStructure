#include "sort.h"

extern Sqlist arr;

void bubbleSort(Sqlist *L){
    int i,j;
    for (i = 1; i < L->length;i++){
        for(j = L->length - 1;j >= i;j--){
            if(L->r[j] > L->r[j+1]){
                swap(L,j,j+1);
            }
        }
    }
}

int main()
{
    printList(&arr);
    bubbleSort(&arr);
    printList(&arr);
    return 0;
}