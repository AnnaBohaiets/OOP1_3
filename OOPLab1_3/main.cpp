#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	Money a, b, c, d;
	a.Read();
	a.Display();

	b.SetFirst(5);
	b.SetSecond(6);
	b.Display();

	c = Money::Plus(b, a);
	cout << c.GetFirst() << " " << c.GetSecond() << endl;
	cout << endl;
	double result1 = a.Divide(2);
	cout << "a divided by 2 \n" << "Money = " << result1 << endl;

	d = Money::Divide(a, b);
	cout << d.GetFirst() << " " << d.GetSecond() << endl;
	cout << endl;

	/*double result2 = a.Divide(a,b);
	cout << "a divided by b \n" << "Money = " << result2 << endl;
*/

	return 0;
}
