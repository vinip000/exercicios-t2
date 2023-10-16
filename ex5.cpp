#include <iostream>

using namespace std;

// Função recursiva para imprimir a sequência de Collatz
void collatzSequence(int n) {
  cout << n << " ";

  if (n == 1) {
    return;  // Caso base: a sequência atingiu o número 1 e encerra a recursão.
  }
  else if (n % 2 == 0) {
    collatzSequence(n / 2);  // Se o número é par, divida por 2.
  }
  else {
    collatzSequence(3 * n + 1);  // Se o número é ímpar, multiplique por 3 e some 1.
  }
}

int main() {
  int numeroInicial;
  cout << "Informe um número inteiro positivo: ";
  cin >> numeroInicial;

  if (numeroInicial > 0) {
    cout << "Sequencia de Collatz para " << numeroInicial << ": ";
    collatzSequence(numeroInicial);
    cout << endl; // Adicione esta linha para imprimir uma quebra de linha após a sequência.
  }
  else {
    cout << "Por favor, insira um número inteiro positivo." << endl;
  }

  return 0;
}
