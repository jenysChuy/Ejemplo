#include <iostream>



void estructuraIf(int x){
    if(x>=18){
        std::cout<<"Es mayor de edad";
    } else{
        std::cout<<"Es menor de edad";
    }
}

void estructuraSwitch(int y){
    switch (y) {
        case 1:
            std::cout<<"LUNES";
            break;
        case 2:
            std::cout<<"MARTES";
            break;
        case 3:
            std::cout<<"MIERCOLES";
            break;
        case 4:
            std::cout<<"JUEVES";
            break;
        case 5:
            std::cout<<"VIERNES";
            break;
        default:
            std::cout<<"El numero es incorrecto";
    }
}

void estructuraFor(int z){
    if (z>10 && z<30){
        for (int i = 1; i <=z ; ++i) {
            if(i%2!=0){
                std::cout<<i;
                std::cout<<"\n";
            }
        }
    }
    else{
        std::cout<<"El numero es incorrecto";
    }
}

void estructuraWhile(int z){
    if (z>10 && z<30){
        int i=1;
        while (i<=z){
            if(i%2!=0){
                std::cout<<i;
                std::cout<<"\n";
                i++;
            }
            else{
                i++;
            }
        }
    }
    else{
        std::cout<<"El numero es incorrecto";
    }
}

int main() {


    int opcion;

    do {
        std::cout << "\n========== Opciones ==========" << std::endl;
        std::cout << "1. Edad" << std::endl;
        std::cout << "2. dias de la semana" << std::endl;
        std::cout << "3. primos" << std::endl;
        std::cout << "4. Par y Impar" << std::endl;
        std::cout << "5. Tablas de multiplicar" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "==========================" << std::endl;
        std::cout << "Selecciona una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::cout << "Ingrese su edad" << std::endl;
                int x;
                std::cin >> x;
                estructuraIf(x);
                break;
            }
            case 2: {
                std::cout << "Ingrese su un numero" << std::endl;
                int y;
                std::cin >> y;
                estructuraSwitch(y);
                break;
            }
            case 3: {
                std::cout << "ingrese un numero" << std::endl;
                int z;
                std::cin >> z;
                estructuraWhile(z);
                break;
            }
            case 4: {
                std::cout << "Par y Impar." << std::endl;
                std::cout << "Introduce Cualquier Numero :)  ";
                int numero;
                std::cin >> numero;
                if (numero % 2 == 0)
                    std::cout << std::endl << numero << " es par\n";
                else
                    std::cout << std::endl << numero << " es impar\n";
                break;
            }

            }
        }

    } while (opcion != 6);
    return 0;
}


