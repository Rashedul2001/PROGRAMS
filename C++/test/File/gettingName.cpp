#include <iostream>




bool isContainInvalidNameCharacters(const std::string_view name){
    return std::



bool isInvalidName(const std::string_view name){
    return {(name.length()<2)||isContainInvalidNameCharacter(name)||spaceCount(name)>2}


}





int main()
{
    std::cout << "Enter your Name: ";
    std::string name;
    do
    {
        std::getline(std::cin, name);
    } while (isInvalidName(name));
    std::cout<<"Hello "<<name<<std::endl;

    return 0;
}
