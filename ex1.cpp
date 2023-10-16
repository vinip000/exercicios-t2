#include <iostream>
#include <locale.h>
using namespace std;

int criarVetor(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor" << endl;
  cin >> tamanho;
  vetor = new int[tamanho];
  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento do vetor" << endl;
    cin >> vetor[i];
  }
  return vetor[0];
}

int encontrarMaior(int* vetor, int tamanho) {
  // Caso base: Se o tamanho for 1, retornamos o �nico elemento como o maior.
  if (tamanho == 1) {
    return vetor[0];
  }

  // Chamada recursiva para encontrar o maior valor no restante do vetor.
  int maiorRestante = encontrarMaior(vetor + 1, tamanho - 1);

  // Compara��o entre o primeiro elemento e o maior valor no restante do vetor.
  return (vetor[0] > maiorRestante) ? vetor[0] : maiorRestante;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;
  criarVetor(vetor, tamanho);

  int maior = encontrarMaior(vetor, tamanho);
  cout << "O maior valor no vetor �: " << maior << endl;

  delete[] vetor;
  return 0;
}