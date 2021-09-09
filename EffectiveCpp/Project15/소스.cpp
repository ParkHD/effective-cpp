#include <iostream>
#include <vector>
#include <tuple>

//모바일
using namespace std;
class GamePlayer2 {
private :
	enum 
	{
		FudgeFactor = 3,
	};
	int score[FudgeFactor];
};
class GamePlayer {
private :
	enum 
	{
		FudgeFactor = 3,
	};
	int score[FudgeFactor];
};

class Temp
{
private:	
	enum
	{
		Num = 3,
	};
	int score[Num];			// ㅇㅇ
public :
	void Show()
	{
		cout << Num << endl;
	}

};


#define CALL_WITH_MAX(a, b) f((a) > (b)? (a) : (b))

template<typename T>
inline void callWithMax(const T& x, const T& y)
{
	return ((x > y) ? x : y);
}

void getSinCos(const double& degrees, double* sin_out, double* cos_out)
{
	static const double pi = 3.141592 / 180.0;
	// static을 씀으로서 메모리낭비 줄이기 한번만 선언함으로

	const double radians = degrees * pi;
	// 안 바뀔 값들은 const를 넣는다. -> 오류줄이기 가능

	*sin_out = std::sin(radians);
	*cos_out = std::cos(radians);
}
//int* getValue(int x)
//{
//	int value = x * 2;
//	return &value;
//}
int* getValue(int x)
{
	int value = x * 2;
	return &value;
}
int& getValue2(int x)
{
	int value = x * 2;
	return value;
}
tuple<int, double, int> getTuple()
{
	int a = 10;
	double b = 3.14;
	int c = 5;
	return make_tuple(a, b, c);
}
int funcB(int x)
{
	return x + 3;
}

#include <array>
#include <functional>
bool IsOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}
bool IsEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}
//void printNumbers(const array<int, 10> my_array, bool (*func)(const int&))
//{
//	for (auto element : my_array)
//	{
//		if (func(my_array[element]))
//		{
//			cout << my_array[element];
//		}
//	}
//	cout << endl;
//}
class A;
class B
{
private:
	int m_value = 1;

public:
	void doSomething(A& a);
};
class A
{
private:
	int m_value = 1;

	friend void B::doSomething(A& a);
};

void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}

int main()
{
	A a;
	B b;
	b.doSomething(a);
}
