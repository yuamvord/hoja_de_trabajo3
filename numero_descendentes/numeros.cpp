#include <iostream>


int main(){
    int i = 1;
    int num;

    std::cout << "Ingrese un número mayor a 1: ";
    std::cin >> num;


    while(num >= i){
        std::cout << num << std::endl;
        num--;
    }

    return 0;
}