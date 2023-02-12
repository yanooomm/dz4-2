/*Сгенерировать список из N элементов. Список должен содержать числа от 0 до 1000.
Удалить из списка все трехзначные числа. Обязательно использовать пердикаты*/

#include <iostream>
#include <list>
#include <time.h>

using namespace std;

bool ThreeDigit(int X)
{
	if (X > 99)
		return true;
	else
		return false;
}

int main()
{
	setlocale(LC_ALL, "rus");
	list <int> lst;
	cout << "Введите длину списка: ";
	int N, a;
	cin >> N;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		
		a = rand()%1000;
		lst.push_back(a);
	}

	list <int> ::iterator it;
	for (it = lst.begin(); it != lst.end(); it++)
		cout << *it << " ";
	cout << endl << endl << endl;

	lst.remove_if(ThreeDigit);

	list <int> ::iterator it1;
	for (it1 = lst.begin(); it1 != lst.end(); it1++)
		cout << *it1 << " ";
}

/*
Введите длину списка: 100
214 794 867 140 691 607 642 872 717 950 779 304 989 330 497 753 823
376 421 283 230 931 774 435 636 72 954 677 901 533 270 280 829 807
923 722 151 837 682 118 312 511 434 914 275 659 215 886 917 40 188
826 140 36 52 984 884 228 470 154 794 883 855 260 268 148 292 565
849 659 568 259 157 585 811 29 352 382 572 308 200 189 896 532 451
954 772 583 313 742 271 228 65 967 619 854 412 601 582 879


72 40 36 52 29 65
*/