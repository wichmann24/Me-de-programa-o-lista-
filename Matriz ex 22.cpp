#include <iostream>
using namespace std;

int main() {
  int A[3][3], B[3][3], C[3][3];
  cout << "Digite os elementos da matriz A:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> A[i][j];
    }
  }
  cout << "Digite os elementos da matriz B:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> B[i][j];
    }
  }
  // Calcula a matriz C = A * B
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      C[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  cout << "Matriz C:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}