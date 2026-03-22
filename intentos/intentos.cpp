#include <iostream>

int main(){
    int pass = 1234;
    int passUser, i = 0, intentos = 3;

    while(i < intentos){
        std::cout << "Ingrese la contraseña: ";
        std::cin >> passUser;
        if(passUser != pass){
            std::cout << "Acceso denegado" << std::endl;
        }else{
            std::cout << "Bienvenido" << std::endl;
            return 0;
        }
        i++;
    }
}