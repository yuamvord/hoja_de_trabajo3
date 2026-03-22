#include <iostream>

int main(){
    int i = 1;
    int nums = 0;

    while (i != 0){
        std::cout << "Ingrese un número: ";
        std::cin >> i;

        nums += i;
    }

    std::cout << "La suma es: " << nums;
    
    return 0;
}