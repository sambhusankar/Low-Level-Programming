#include <stdio.h>
void CreateTable(int[]);
void CreateTable(int table[]){
    for(int i = 1;i<11;i++){
        table[i -1] = (i) * 5;
    }
    for(int i = 0;i<10;i++){
        printf("%d \n", table[i]);
    }
}
int main(){
    int table[10];
    CreateTable(table);
    return 0;
}