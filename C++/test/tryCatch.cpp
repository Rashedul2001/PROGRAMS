#include<iostream>
#include<stdexcept>

int main(){
    std::cout<< "Enter two numbers to Divide: ";
    double num1,num2;
    std::cin >> num1 >> num2;
    try{
        if(num2==0){
            // throw std::runtime_error("Cannot divide by Zero.");
        }
        double result= num1/num2;
        std::cout << "The result is: "<< result <<std::endl;




    }
    catch(std::exception& e){
        std::cerr<<"Error "<< e.what() << std::endl; 

    }





    return 0;
}