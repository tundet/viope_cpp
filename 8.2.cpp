#include <iostream>
#include <fstream>

/*
The C++ program below reads from the file matrix.txt integers table inserting it in the 5x5 table (matrix [5][5]).
The program prints the matrix on screen, calculates the sum of the elements and prints the sum on screen making use of
functions print_matrix () and count_sum(). Your task is to make up the functions in question. The values situated on the
rows are separated by space.
*/

using namespace std;

void print_matrix(int matrix[5][5]);
int count_sum(int matrix[5][5]);

int main(void)
{
  int matrix[5][5];
  int sum;
  ifstream number("matrix.txt");
  if (!number){
        cout << "Failed to open file...";
  }
  else {
    for (int y=0; y<5;y++){
          for (int x=0;x<5;x++){
            number >> matrix[y][x];
          }
    }
    number.close();
    cout << "Matrix:" << endl;
    print_matrix(matrix);
    sum = count_sum(matrix);
    cout << "Sum of elements: " << sum << endl;
  }
}

void print_matrix(int m[5][5])
{
  for (int y=0; y<5;y++){
    for (int x=0;x<5;x++){
      cout << m[y][x] << " ";
    }
    cout << endl;
  }
}

int count_sum(int m[5][5])
{
   int returning = 0;
   for (int y=0; y<5;y++){
     for (int x=0;x<5;x++){
       returning += m[y][x];
     }
   }
   return returning;
}


