#include <iostream>
#include <string>

//La función esPalindromo recibe una cadena de texto como parámetro.

bool esPalindromo(const std::string& palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;
//Se utiliza un bucle while que se ejecuta mientras inicio sea menor que fin.
    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
//En cada iteración del bucle, se verifica si el carácter en la posición inicio es igual al carácter en la posición fin. Si no son iguales, la cadena no es un palíndromo y se devuelve false.
            return false;
        }
        inicio++;
        fin--;
    }
//Si el bucle se completa sin encontrar diferencias, la cadena es un palíndromo y se devuelve true.
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
//Dependiendo del valor de retorno de la función, se imprime en la consola si la cadena es un palíndromo o no.
    return 0;
}

