#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;
    int contadorVocales = 0;

    cout << "Ingresa una frase con 35 espacios: ";
    getline(cin, frase);

    // Convertir la frase a minúsculas para facilitar el conteo de vocales
    for (char & c : frase) {
        c = tolower(c);
    }

    // Contar las vocales en la frase
    for (char c : frase) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contadorVocales++;
        }
    }

    cout << "Cantidad de vocales utilizadas: " << contadorVocales << endl;

    return 0;
}

