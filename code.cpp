#include <iostream>
#include <string.h>
using namespace std;

int main() {
  struct KURSANT {
    char name[50];
    int mark[5];
    int group;
    int counter;
  };
  int n;
  int counter;
  int bad_counter=0;
  cout << "Enter the number of kursants (n):" << endl;
  cin >> n;
  KURSANT kursant[n];

  for (int i = 0;i<n;i++) {
    counter=0;
    cout << "Enter the name (FamiliyaIO): ";
    cin >> kursant[i].name;
    cout << "Enter the group: ";
    cin >> kursant[i].group;
    cout << "Enter five marks: " << endl;
    for (int j=0;j<5;j++) {
      cout << "M[" << (j+1) << "] = ";
      cin >> kursant[i].mark[j];
      if (kursant[i].mark[j]==2) {
        counter++;
      }
    }
    kursant[i].counter=counter;
  }

  char namebuf[40];
  int buf1;
  int buf2;
  for (int i=n-1;i>0;i--)//сортировка
  {
    for(int j=0;j<i;j++)
    {
      if(strcmp(kursant[j].name,kursant[j+1].name)>0)
      {
        strcpy(namebuf,kursant[j].name);
        strcpy(kursant[j].name,kursant[i].name);
        strcpy(kursant[i].name,namebuf);
        buf1=kursant[i].group;
        kursant[i].group=kursant[j].group;
        kursant[j].group=buf1;
        buf2=kursant[i].counter;
        kursant[i].counter=kursant[j].counter;
        kursant[j].counter=buf1;
      }
    }
  }

  cout << "Kursants with more or equal than two '2' marks:" << endl;
  for (int i=0;i<n;i++) {
    if (kursant[i].counter>=2) {
      cout << "FIO of kursant: " << kursant[i].name << endl;
      cout << "Group: " << kursant[i].group << endl;
      bad_counter+=1;
    }
  }
  if (bad_counter==0) {
    cout << "Error: Nobody has more or equal than '2' marks!" << endl;
  }

  return 0;
}
