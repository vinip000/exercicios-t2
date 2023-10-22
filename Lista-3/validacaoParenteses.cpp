#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Fun��o para verificar se os par�nteses est�o balanceados
bool verificaParenteses(const string& expressao) {
  stack<char> pilha;

  for (char caractere : expressao) {
    if (caractere == '(') {
      pilha.push(caractere);
    }
    else if (caractere == ')') {
      if (pilha.empty()) {
        return false; // Par�nteses desbalanceados
      }
      else {
        pilha.pop();
      }
    }
  }

  return pilha.empty(); // Par�nteses balanceados se a pilha estiver vazia no final
}

int main() {
  string expressao;
  cout << "Digite uma express�o matem�tica: ";
  getline(cin, expressao);

  if (verificaParenteses(expressao)) {
    cout << "Os par�nteses est�o balanceados." << endl;
  }
  else {
    cout << "Os par�nteses n�o est�o balanceados." << endl;
  }

  return 0;
}
