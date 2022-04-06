#include <iostream>
#include <string.h>
using namespace std;

int main() {
  struct KURSANT { // Объявление структуры
    char name[50];
    int mark[5];
    int group;
    int counter;
  };
  int n; // Число курсантов
  int counter; // Счётчик двоек
  int bad_counter=0; // Счётчик курсантов с двумя двойками
  cout << "Enter the number of kursants (n):" << endl;
  cin >> n;
  KURSANT *kursant = new KURSANT[n]; // Создание n структур KURSANT

  for (int i = 0;i<n;i++) { // Заполнение структур
    cout << "Enter the name (FamiliyaIO): ";
    cin >> kursant[i].name;
    cout << "Enter the group: ";
    cin >> kursant[i].group;
    cout << "Enter five marks: " << endl;
    kursant[i].counter=0;
    for (int j=0;j<5;j++) {
      cout << "M[" << (j+1) << "] = ";
      cin >> kursant[i].mark[j];
      if (kursant[i].mark[j]==2) // Если введена двойка - счёт
        kursant[i].counter++; // Кол-во двоек присваивается переменной структуры

    }
  }
  for (int i=n-1;i>0;i--) // Сортировка структур по алфавиту
  {
    for(int j=0;j<i;j++)
    {
      if(strcmp(kursant[j].name,kursant[j+1].name)>0)
      {
        KURSANT kursantbuf;
        kursantbuf = kursant[j];
        kursant[j] = kursant[j+1];
        kursant[j+1] = kursantbuf;
      }
    }
  }
  cout << "Sorted list:" << endl;
  for (int i=0;i<n;i++) {
      cout << "FIO of kursant: " << kursant[i].name << endl;
      cout << "Group: " << kursant[i].group << endl;
    }
  cout << "Kursants with more or equal than two '2' marks:" << endl;


  for (int i=0;i<n;i++) {
    if (kursant[i].counter>=2) { // Вывод курсантов с двумя и более двойками
      cout << "FIO of kursant: " << kursant[i].name << endl;
      cout << "Group: " << kursant[i].group << endl;
      bad_counter+=1; // Если такой курсант нашелся - счёт
    }
  }
  if (bad_counter==0) { // Если не нашлось ни одного такого - вывод об этом
    cout << "Error: Nobody has more or equal than '2' marks!" << endl;
  }
  delete[] kursant;

  return 0;
}
