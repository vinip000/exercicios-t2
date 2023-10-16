#include <iostream>
#include <string>
using namespace std;

bool verificar(string palavra) {
  if (palavra.size() <= 1) {
    return true; // Caso base: uma letra � um pal�ndromo.
  }

  if (palavra[0] == palavra.back() && verificar(palavra.substr(1, palavra.length() - 2))) {
    return true;
  }

  return false; // Se a condi��o acima n�o for atendida, n�o � um pal�ndromo.
}

int main() {
  string palavra;
  cout << "Digite uma palavra: " << endl;
  cin >> palavra;

  if (verificar(palavra)) {
    cout << "A palavra � um pal�ndromo." << endl;
  }
  else {
    cout << "A palavra n�o � um pal�ndromo." << endl;
  }

  return 0;
}
