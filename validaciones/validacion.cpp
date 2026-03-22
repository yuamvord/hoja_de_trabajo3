#include <iostream>

int main(){
    int pass = 1234;
    int passUser;
    while (passUser != pass){
        std::cout << "Ingrese la contraseña: ";
        std::cin >> passUser;
        if(passUser != pass){
            std::cout << "Contraseña incorrecta" << std::endl;
        }
    }

    std::cout << "Contraseña correcta, bienvenido";

    return 0;
}