#include <iostream>
#include <locale.h>
using namespace std;

// Função para criar e preencher um vetor
int criarVetor(int*& vetor, int& tamanho) {
  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  // Aloca espaço dinamicamente para o vetor
  vetor = new int[tamanho];

  for (int i = 0; i < tamanho; i++) {
    cout << "Digite o elemento " << i + 1 << " do vetor: ";
    cin >> vetor[i];
  }
  // A função retorna o primeiro elemento, mas isso pode ser confuso.
  // Pode ser mais claro fazer esta função void e não retornar nada.
  return vetor[0];
}

// Função recursiva para encontrar o maior valor no vetor
int encontrarMaior(int* vetor, int tamanho) {
    // Caso base: Se o tamanho for 1, retornamos o único elemento como o maior
  if (tamanho == 1) {
    return vetor[0];
  }

  // Chamada recursiva para encontrar o maior valor no restante do vetor
  int maiorRestante = encontrarMaior(vetor + 1, tamanho - 1);

  // Compara o primeiro elemento com o maior valor encontrado no restante do vetor
  return (vetor[0] > maiorRestante) ? vetor[0] : maiorRestante;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int tamanho;
  int* vetor;

  criarVetor(vetor, tamanho);

  int maior = encontrarMaior(vetor, tamanho);
  cout << "O maior valor no vetor é: " << maior << endl;

  // Libera a memória alocada para o vetor
  delete[] vetor;

  return 0;
}
