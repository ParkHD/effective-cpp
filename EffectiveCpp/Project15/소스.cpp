#include <iostream>
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
int main()
{
	int x = 3;
	int y = 5;
	callWithMax(x, y);
}
