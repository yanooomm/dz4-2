/*Создать два списка (контейнер list). Вывести их на экран. Вставить из второго
списка в первый элементы, значения которых лежат между k1 и.k2 Вывести первый
список на экран.*/

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    list <int> lst1, lst2;
    cout << "Введите длину первого списка: ";
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        cin >> a;
        lst1.push_back(a);
    }
    cout << "Введите длину второго списка: ";
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> a;
        lst2.push_back(a);
    }
    cout << "Введите номер элемента к1:  ";
    int k1;
    cin >> k1;
    cout << "Введите номер элемента к2: ";
    int k2;
    cin >> k2;
    auto it1 = lst2.begin();
    auto it2 = lst2.begin();
    auto beg = lst1.begin();
    auto end = lst1.end();
    advance(it1, k1);
    advance(it2, k2-1);
    lst1.splice(end, lst2, it1, it2);
    for (beg; beg != lst1.end(); ++beg)
        cout << *beg << " ";
}

/*
Введите длину первого списка: 8
1
2
3
4
5
6
7
8
Введите длину второго списка: 10
10
11
12
13
14
15
16
17
18
19
Введите номер элемента к1:  3
Введите номер элемента к2: 7
1 2 3 4 5 6 7 8 13 14 15
*/
