#include <iostream>

int main() {
    int n;
    std::cout << "Ingresa un numero entero para la piramide: ";
    std::cin >> n;
    int i = 1; 

    while (i <= n) {    
        int espacios = n - i;
        while (espacios > 0) {
            std::cout << " ";
            espacios--;
        }
        int asteriscos = i;
        while (asteriscos > 0) {
            std::cout << "*";
            asteriscos--;
        }
        std::cout << std::endl;
        i++; 
    }

    return 0;
}