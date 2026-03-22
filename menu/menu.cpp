#include <iostream>

int main(){
    int opciones = 0;
    int i = 0;
    do{
        std::cout << "--Ingrese una opción del menú--" << std::endl;
        std::cout << "1. Mostrar números del 1 al 5" << std::endl;
        std::cout << "2. Mostrar números pares 1 al 10" << std::endl;
        std::cout << "0. Salir" << std::endl;
        std::cin >> opciones;

        if(opciones == 1){
            while(i < 5){
                std::cout << i + 1 << std::endl;
                i++;
            }
        }else if(opciones == 2){
            while(i < 10){
                std::cout << i + 2 << std::endl;
                i += 2;
            }
        }else if(opciones == 0){
            continue;
        }else{
            std::cout << "Ingrese una opción valida del menú" << std::endl;
        }
    }while (opciones != 0);
    
    return 0;
}