#include<iostream>

int main(){
    int array[] = {25, 1, 7, 26, 86, 61, 12, 73, 99, 5};
    int len=sizeof(array)/sizeof(array[0]);
    std::cout<<"Enter what you want to search:";
    int element;
    std::cin>> element;
    for(int i=0;i<len;i++){
        if(array[i]==element){
            std::cout<<"Found the Element at postion "<<i+1<<std::endl;
            return 0;
        }
    }
    std::cout<<"No such Element Fount in the Array."<<std::endl;

    return 0;
}



