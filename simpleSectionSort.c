#include "sort.h"

// extern Sqlist arr;

void simpleSectionSort(Sqlist *L){
    int i,j,min;
    for(i = 1;i < L->length;i++){
        min = i;
        for(j = i + 1;j <= L->length;j++){
            if(L->r[j] < L->r[min]){
                min = j;
            }
        }
        if (i != min)
            swap(L, i, min);
    }
}

int main()
{
    printList(&arr);
    simpleSectionSort(&arr);
    printList(&arr);
    return 0;
}