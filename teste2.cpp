#include <iostream>

using namespace std;

int tribonacci(int n) {
  if (n == 0) {
    return 0;
  }
  else if (n == 1 || n == 2) {
    return 1;
  }
  else {
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
  }
}

int main() {
  int n;
  cout << "Digite o valor de n para calcular o n-ésimo termo da sequência de Tribonacci: ";
  cin >> n;

  int resultado = tribonacci(n);

  cout << "O " << n << "-ésimo termo da sequência de Tribonacci é: " << resultado << endl;

  return 0;
}