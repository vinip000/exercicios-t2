#include <iostream>

using namespace std;

// Função recursiva para imprimir a sequência de Collatz
void sequenciaCollatz(int n) {
  cout << n << " ";

  if (n == 1) {
    return;  // Caso base: a sequência atingiu o número 1 e encerra a recursão.
  }
  else if (n % 2 == 0) {
    sequenciaCollatz(n / 2);  // Se o número é par, divida por 2.
  }
  else {
    sequenciaCollatz(3 * n + 1);  // Se o número é ímpar, multiplique por 3 e some 1.
  }
}

int main() {
  int numeroInicial;
  cout << "Informe um número inteiro positivo: ";
  cin >> numeroInicial;

  if (numeroInicial > 0) {
    cout << "Sequência de Collatz para " << numeroInicial << ": ";
    sequenciaCollatz(numeroInicial);
    cout << endl; // Adiciona uma quebra de linha após a sequência.
  }
  else {
    cout << "Por favor, insira um número inteiro positivo." << endl;
  }

  return 0;
}
