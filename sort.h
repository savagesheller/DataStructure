#include <stdio.h>
#define MAXSIZE 10

typedef struct 
{
    /* data */
    int r[MAXSIZE + 1];
    int length;
}Sqlist;

void swap(Sqlist *L,int i,int j){
    int temp = L->r[i];
    L->r[i] = L->r[j];
    L->r[j] =temp;
}

void printList(Sqlist *L){
    int i;
    for(i = 0;i < L->length+1;i++){
        printf("%d ",L->r[i]);
    }
    printf("\n");
}