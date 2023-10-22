#include <iostream>
#include <string>
using namespace std;

bool verificar(string palavra) {
  if (palavra.size() <= 1) {
    return true; // Caso base: uma letra é um palíndromo.
  }

  if (palavra[0] == palavra.back() && verificar(palavra.substr(1, palavra.length() - 2))) {
    return true; // Os caracteres das extremidades são iguais e o restante da palavra também forma um palíndromo.
  }

  return false; // Se a condição acima não for atendida, não é um palíndromo.
}

int main() {
  string palavra;
  cout << "Digite uma palavra: " << endl;
  cin >> palavra;

  if (verificar(palavra)) {
    cout << "A palavra é um palíndromo." << endl;
  }
  else {
    cout << "A palavra não é um palíndromo." << endl;
  }

  return 0;
}