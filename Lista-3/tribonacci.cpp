#include <iostream>

using namespace std;

// Função para calcular o n-ésimo termo da sequência de Tribonacci.
int tribonacci(int n) {
  // Caso base 1: O termo T(0) é 0.
  if (n == 0) {
    return 0;
  }
  // Caso base 2 e 3: Os termos T(1) e T(2) são 1.
  else if (n == 1 || n == 2) {
    return 1;
  }
  // Para outros termos, o valor é a soma dos três termos anteriores.
  // A chamada recursiva é usada para calcular os termos anteriores.
  else {
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
  }
}

int main() {
  int n;
  cout << "Digite o valor de n para calcular o n-ésimo termo da sequência de Tribonacci: ";
  cin >> n;

  // Calcula o n-ésimo termo da sequência.
  int resultado = tribonacci(n);

  cout << "O " << n << "-ésimo termo da sequência de Tribonacci é: " << resultado << endl;

  return 0;
}
