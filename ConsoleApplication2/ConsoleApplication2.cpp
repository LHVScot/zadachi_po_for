// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    /*int n = 10, n2 = 5;
    for (int i = 0; i < 11; i++) {

        for (int j = 0; j <15; j++) {
            if (i  > j && i+j>n-1)
                cout << "|---|";
            else
                cout << "     ";

        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 7; i++) {

        for (int j = 0; j < 10; j++) {
  
                cout << "|###|";
        }
        cout << endl;
    }*/
    //1
    cout << "задание 1\n";
    int A = 10, B = 15;
    for (int i = A; i <= B; ++i) {
        cout << "Делители числа " << i << ": ";
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                cout << j << " ";
            }
        } cout << endl;
    }
     //2   
    cout << "задание 2\n";

    cout << "Простые числа в диапазоне от 2 до 1000: ";
        for (int i = 2; i <= 1000; i++) {
            bool q = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    q = false;
                    break;
                }
            }
            if (q==true) {
                cout << i << " ";
            }
        }
        cout << endl;
        //3
        cout << "задание 3\n";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++)
                cout << ' ';
            for (int k = n; k >= n - (2 * i); k--)
                cout << '*';
            cout << endl;
        }
        return 0;
    }



