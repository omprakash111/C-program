#include<iostream>

using namespace std;
 
class Rect
{
	int length;
	int breadth;
	public:
	int fun()
	{
		return length;
	}
};

int main()
{
	Rect r;
	int t=r.fun();
	cout<<t;
}
