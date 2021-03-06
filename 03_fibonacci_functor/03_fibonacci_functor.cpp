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

class fibReturn
{
private:

	int x;
	int y;
public:

	fibReturn(int x = 1, int y = 0):x(x), y(y)
	{}

	int operator()()
	{
		x += y;
		y = x - y;
		return y;
	}
};

int main()
{
	deque<int> fib(10);
	generate(fib.begin(), fib.end(), fibReturn());
	copy(fib.begin(), fib.end(), ostream_iterator<int>(cout, "\t"));

	cout << endl;
	return 0;
}