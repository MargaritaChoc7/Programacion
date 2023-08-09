#include <iostream>
#include <string>

//La funci�n esPalindromo recibe una cadena de texto como par�metro.

bool esPalindromo(const std::string& palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;
//Se utiliza un bucle while que se ejecuta mientras inicio sea menor que fin.
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
//En cada iteraci�n del bucle, se verifica si el car�cter en la posici�n inicio es igual al car�cter en la posici�n fin. Si no son iguales, la cadena no es un pal�ndromo y se devuelve false.
            return false;
        }
        inicio++;
        fin--;
    }
//Si el bucle se completa sin encontrar diferencias, la cadena es un pal�ndromo y se devuelve true.
    return true;
}

int main() {
    std::string palabra;s
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    if (esPalindromo(palabra)) {
        std::cout << "La palabra es un palindromo" << std::endl;
    } else {
        std::cout << "La palabra no es un palindromo" << std::endl;
    }
//Dependiendo del valor de retorno de la funci�n, se imprime en la consola si la cadena es un pal�ndromo o no.
    return 0;
}

