#include <iostream>
using namespace std;

int main() {
  struct KURSANT {
    char name[50];
    int mark[5];
    int group;
  };
  int n;
  int count=0;
  cout << "Enter the number of kursants (n):" << endl;
  cin >> n;
  KURSANT kursant[n];
  for (int i = 0;i<n;i++) {
    cout << "Enter the name (Fasmiliya.I.O.): " << endl;
    cin >> kursant[i].name;
    cout << "Enter the group:" << endl;
    cin >> kursant[i].group;
    cout << "Enter five marks: " << endl;
    for (int j=0;j<5;j++) {
      cout << "M[" << (j+1) << "] = ";
      cin >> kursant.mark[j];
    }
  }
  
  return 0;
}
