#include <iostream>
using namespace std;

// Fun��o recursiva para inverter uma string
string inverterString(string palavra) {
  //Aqui estamos verificando o tamanho da palavra com o palavra.size, e se a palavra for menor do que 1, signnifica que a palavra ja esta invertida por ter apenas 1 caracter, ent�o fazemos o retorno da pr�pria palavra
  if (palavra.size() <= 1) {
    return palavra;
  }

  // Recursivamente inverte a parte restante da string, sendo assim, o palavra.substr come�a do 2 caractere em diante, e essa chamada ir� ocorrer at� que o caso base seja verdadeiro, e quando isso ocorrer 
  return inverterString(palavra.substr(1)) + palavra[0];
}

int main() {
  string palavra;
  cout << "Digite uma string: ";
  cin >> palavra;

  string invertida = inverterString(palavra);
  cout << "String invertida: " << invertida << endl;

  return 0;
}
