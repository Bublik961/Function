/**************************************
 * Автор: Тенц Ангелина               *
 * Вариант: 27                        *
 * Название: Функции                  *
 **************************************/

#include <iostream>

using namespace std;

void readArray(double array[], int sizeArray) {
  cout << "Enter array elements:";
  for (int elementIndex = 0; elementIndex < sizeArray; ++elementIndex) {
    cin >> array[elementIndex];
  }
}

int counter(double a, double b, double array[], int size) {
  int counter;
  double temp;

  counter = 0;

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }                                   
  for (int elementIndex = 0; elementIndex < size; ++elementIndex) {
    if (array[elementIndex] <= a || array[elementIndex] >= b) {
      counter += 1;
    }
  }
  return counter;
}

int main() {
  constexpr int maxSize = 100;
  int n, m, k;
  double a, b;
  int countX, countY, countZ;

  cout << "Enter the left border: ";
  cin >> a;

  cout << "Enter the right border: ";
  cin >> b;

  cout << "Enter the array X size: ";
  cin >> n;

  cout << "Enter the array Y size: ";
  cin >> m;

  cout << "Enter the array Z size: ";
  cin >> k;

  double X[maxSize];
  double Y[maxSize];
  double Z[maxSize];

  readArray(X, n);
  readArray(Y, m);
  readArray(Z, k);
    
  countX = counter(a, b, X, n);
  countY= counter(a, b, Y, m);
  countZ = counter(a, b, Z, k);

  cout << "\nNumber of elements X outside (a, b): " << countX 
       << "\nNumber of elements Y outside (a, b): " << countY
       << "\nNumber of elements Z outside (a, b): " << countZ;

  return 0;
}