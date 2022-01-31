#include <iostream>

using namespace std;

int fib(int n);

int main()
{
	int Num = 1;
	int m;
	while (true)
	{
		m = fib(Num);
		if (m > 1000)
		{
			break;
		}
		cout << Num << "=" << m << endl;
		Num++;
	}
	return 0;
}

int fib(int n)
{
	if (n <= 1)return n;

	return fib(n - 1) + fib(n - 2);