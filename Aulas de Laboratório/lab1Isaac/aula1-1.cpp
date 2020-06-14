#include <iostream>
using namespace std;
int main() {
    int n, par, impar, num, cont;
    cout << "Digite o tamanho da sequencia: \n"; // mostra mensagem na tela
    cin >> n; // lê a informação do teclado */
    par = 0;
    impar = 0;
    cont = 0;
    while (cont < n) {
        cout << "Digite o " << cont+1 << "o numero: \n";
        cin >> num;
        if (num%2 == 0) par = par + 1;
        else impar = impar + 1;
        cont = cont + 1;
    }
    cout << "A sequencia eh formada por " << par << " numeros pares e " <<
    impar << " impares.\n";
    return 0;
}
