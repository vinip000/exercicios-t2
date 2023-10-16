#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Função para verificar se os parênteses estão balanceados
bool verificaParenteses(const string& expressao) {
  stack<char> pilha;

  for (char caractere : expressao) {
    if (caractere == '(') {
      pilha.push(caractere);
    }
    else if (caractere == ')') {
      if (pilha.empty()) {
        return false; // Parênteses desbalanceados
      }
      else {
        pilha.pop();
      }
    }
  }

  return pilha.empty(); // Parênteses balanceados se a pilha estiver vazia no final
}

int main() {
  string expressao;
  cout << "Digite uma expressão matemática: ";
  getline(cin, expressao);

  if (verificaParenteses(expressao)) {
    cout << "Os parênteses estão balanceados." << endl;
  }
  else {
    cout << "Os parênteses não estão balanceados." << endl;
  }

  return 0;
}