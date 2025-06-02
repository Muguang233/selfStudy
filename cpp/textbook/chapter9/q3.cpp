#include <iostream>
using namespace std;
struct chaff {
  char dross[20];
  int slag;
};

int main() {
  const int SIZE = 2;
  char buffer[sizeof(chaff) * SIZE];
  chaff *pChaff = new (buffer) chaff[SIZE];

  for (int i = 0; i < SIZE; ++i) {
    cout << "Enter dross" << i + 1 << ": ";
    cin >> pChaff[i].dross;
    cout << "Enter slag" << i + 1 << ": ";
    cin >> pChaff[i].slag;
  }

  cout << "\nContents of chaff structures:\n";
  for (int i = 0; i < SIZE; ++i) {
    cout << "Chaff " << i + 1 << ": dross = " << pChaff[i].dross << ", slag = " << pChaff[i].slag << endl;
  }

  return 0;
}