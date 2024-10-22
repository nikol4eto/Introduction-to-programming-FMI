#include <iostream>
using namespace std;

int main()
{
        //Sem. 01

        //zadacha 1, proverka za chetnost
    
            int n;
            cin >> n;
            cout << (n % 2 == 0) << endl;
            return 0;

        //zadacha 2, opposite number + 1
            int n;
            cin >> n;
            int reversed_n = (n % 10) * 100 + (n / 10 % 10) * 10 + (n / 100);
            cout << reversed_n + 1 << endl;
            return 0;

        //zadacha 3, check for english vowels Upper and lower case included
            char ch;
            cin >> ch;

            int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

            cout << isVowel << endl; 

            return 0;


        //zadacha 4, checking for a valid grade
            int n;
            cin >> n;
            cout << (n >= 2 && n <= 6) << endl;
            return 0;

        //zadacha 5, remove the last number
            int n;
            cin >> n;
            cout << n / 10 << endl;
            return 0;

        //zadacha 6, (a+b)^4-(a-b)^2
            int a, b;
            cin >> a >> b;
            int result = pow(a + b, 4) - pow(a - b, 2);
                cout << result << endl;
            return 0;

         //zadacha 7
            int n;
            cin >> n;

            int banknotes100 = n / 100;
            n %= 100;

            int banknotes50 = n / 50;
            n %= 50;

            int banknotes20 = n / 20;
            n %= 20;

            int banknotes5 = n / 5;
            n %= 5;

            int banknotes2 = n / 2;
            n %= 2;

            int banknotes1 = n;

            cout << banknotes100 << "x100lv "
                << banknotes50 << "x50lv "
                << banknotes20 << "x20lv "
                << banknotes5 << "x5lv "
                << banknotes2 << "x2lv "
                << banknotes1 << "x1lv" << endl;

            return 0;

       //zadacha 8
            int a, b;
            cin >> a >> b;
            cout << (a * (a >= b) + b * (b > a)) << endl;
            return 0;

        //zadacha 9
            int a, b;
            cin >> a >> b;
            a = a + b;
            b = a - b;
            a = a - b;
            cout << a << " " << b << endl;
            return 0;

}
