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
  // for (int j=0;j<n;j++) {
  //   for (int i=j;i<n;i++) {
  //     if(strcmp(kursant[j].inic,kursant[j+1].inic)>0) {
  //
  //     }
  //   }
  // }
  for (int i=0;i<n;i++) {
    cout << i+1 << ") ";
    cout << "Start: ";
    cout << group[i].start;
    cout << "Finish: ";
    cout << group[i].finish << endl;
    cout << "Number: ";
    cout << group[i].number << endl;
  }
  cout << "Enter the route number: " << endl;
  cin >> p;
  for (int i=0;i<n;i++) {
    if (group[i].number==p) {
      cout << "Start: ";
      cout << group[i].start;
      cout << "; Finish: ";
      cout << group[i].finish << endl;
      cout << "Number: ";
      cout << group[i].number << endl;
      count+=1;
    }
  }
  if (count==0) {
    cout << "Nobody search!" << endl;
  }
  return 0;
}
