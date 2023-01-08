#include <iostream>
using namespace std;
int main() {
   int s[10][10], trans[10][10], row, column, i, j;
   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;
   cout << "\nEnter elements of matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> s[i][j];
      }
   }
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << s[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         trans[j][i] = s[i][j];
      }
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << trans[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }
   return 0;
}
