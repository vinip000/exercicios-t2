#include <iostream>

using namespace std;

// Fun��o recursiva para imprimir a sequ�ncia de Collatz
void collatzSequence(int n) {
  cout << n << " ";

  if (n == 1) {
    return;  // Caso base: a sequ�ncia atingiu o n�mero 1 e encerra a recurs�o.
  }
  else if (n % 2 == 0) {
    collatzSequence(n / 2);  // Se o n�mero � par, divida por 2.
  }
  else {
    collatzSequence(3 * n + 1);  // Se o n�mero � �mpar, multiplique por 3 e some 1.
  }
}

int main() {
  int numeroInicial;
  cout << "Informe um n�mero inteiro positivo: ";
  cin >> numeroInicial;

  if (numeroInicial > 0) {
    cout << "Sequencia de Collatz para " << numeroInicial << ": ";
    collatzSequence(numeroInicial);
    cout << endl; // Adicione esta linha para imprimir uma quebra de linha ap�s a sequ�ncia.
  }
  else {
    cout << "Por favor, insira um n�mero inteiro positivo." << endl;
  }

  return 0;
}
