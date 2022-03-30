#include <iostream>
using namespace std;

int main() {
  struct KURSANT {
    char name[50];
    int mark[5];
    int group;
    int counter;
  };
  int n;
  cout << "Enter the number of kursants (n):" << endl;
  cin >> n;
  KURSANT kursant[n];
  for (int i = 0;i<n;i++) {
    kursant[i].counter=0;
    cout << "Enter the name (Familiya.I.O.): " << endl;
    cin >> kursant[i].name;
    cout << "Enter the group:" << endl;
    cin >> kursant[i].group;
    cout << "Enter five marks: " << endl;
    for (int j=0;j<5;j++) {
      cout << "M[" << (j+1) << "] = ";
      cin >> kursant[i].mark[j];
      if (kursant[i].mark[j]=='2') {
        kursant[i].counter++;
      }
    }
  }
  cout << "Kursants with bad marks:" << endl;
  for (int i=0;i<n;i++) {
    if (kursant[i].counter>=2) {
      cout << "FIO of kursant: " << kursant[i].name << endl;
      cout << "Group: " << kursant[i].group << endl;
    }
  }

  return 0;
}
