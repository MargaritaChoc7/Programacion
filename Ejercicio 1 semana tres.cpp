#include <iostream>
#include <string>

using namespace std;

int main() {
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase);

    // Invertir la frase
    string fraseInvertida = "";
    for (int i = frase.length() - 1; i >= 0; i--) {
        fraseInvertida += frase[i];
    }

    cout << "Frase invertida: " << fraseInvertida << endl;

    return 0;
}

