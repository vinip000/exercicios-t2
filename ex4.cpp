#include <iostream>
#include <locale.h>

using namespace std;

void criar(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do conjunto: ";
  cin >> tamanho;
  vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento " << i + 1 << ": ";
    cin >> vetor[i];
  }
}

void gerarSubconjuntos(const int* conjunto, int* subconjunto, int tamanhoConjunto, int posicao, int posicaoSubconjunto) {
  if (posicao == tamanhoConjunto) {
    // Imprima o subconjunto
    cout << "{ ";
    for (int i = 0; i < posicaoSubconjunto; i++) {
      cout << subconjunto[i] << " ";
    }
    cout << "}" << endl;
    return;
  }

  // Recursão sem adicionar o elemento atual ao subconjunto
  gerarSubconjuntos(conjunto, subconjunto, tamanhoConjunto, posicao + 1, posicaoSubconjunto);

  // Recursão adicionando o elemento atual ao subconjunto
  subconjunto[posicaoSubconjunto] = conjunto[posicao];
  gerarSubconjuntos(conjunto, subconjunto, tamanhoConjunto, posicao + 1, posicaoSubconjunto + 1);
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* conjunto;

  criar(conjunto, tamanho);

  int* subconjunto = new int[tamanho];

  gerarSubconjuntos(conjunto, subconjunto, tamanho, 0, 0);

  delete[] subconjunto;
  delete[] conjunto;

  return 0;
}

