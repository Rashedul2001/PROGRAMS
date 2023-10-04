#include<stdio.h>
void addone(int*ad);
int main(){
    int* p, i=10;
    p=&i;
    addone(p);
    printf("%d",*p);
    
}
void addone(int*ad){
    (*ad)++;
}