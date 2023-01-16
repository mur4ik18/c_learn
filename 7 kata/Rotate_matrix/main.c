#include <stddef.h>
#include <stdio.h>
void rotate_matrix(size_t m, size_t n, const int matrix[m][n], int rotated[n][m]);
int main() {
  size_t m = 2, n = 3;
  int result[n][m];
  int matrice[2][3] = {{-1,4,5},{4,5,6}};
  rotate_matrix(m, n, matrice, result);
  for (size_t i = 0; i<n; i++){
    for (size_t j = 0; j<m; j++){
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0;

}

void rotate_matrix(size_t m, size_t n, const int matrix[m][n], int rotated[n][m]) {
  for (size_t i = 0; i<m; i++){
    for (size_t j=0; j<n; j++) {
      rotated[j][i] = matrix[i][j];
    }
  }
}



