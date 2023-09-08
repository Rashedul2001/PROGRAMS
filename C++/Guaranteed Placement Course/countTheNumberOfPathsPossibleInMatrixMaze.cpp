#include<iostream>
    int countPath(int n,int x,int y){

        if(x==n-1&&y==n-1){
            return 1;
        }
        if(x>=n||y>=n){
            return 0;
        }
        return countPath(n,x+1,y)+countPath(n,x,y+1);



    }

int main(){
    int n,a,b;
    std::cin>>n>>a>>b;
    std::cout<<countPath(n,a,b)<<std::endl;



    return 0;
}