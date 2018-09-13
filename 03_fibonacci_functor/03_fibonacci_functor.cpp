/*
Завдання 3.
Створити функтор без параметрів, який дозволить генерувати числа Фібоначі( 0 1 1 2 3 5 8....). 
Перевірити роботу функтора для цілочислового контейнера(вектору, деку чи ін.) з використанням алгоритму generate().

*/

#include "pch.h"
#include <iostream>
#include <deque>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

int fibReturn()
{
	static int x = 1;
	static int y = 0;
	x += y; 
	y = x - y; 
	return y;
}

int main()
{

	deque<int> fib(10);
	int x = 1, y = 0;
	generate(fib.begin(), fib.end(), fibReturn);
	copy(fib.begin(), fib.end(), ostream_iterator<int>(cout, "\t"));

	cout << endl;
	system("pause");
	return 0;
}