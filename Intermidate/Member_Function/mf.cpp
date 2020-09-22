#include <iostream>
#include <string>

using namespace std;

/*------------------------------------------------------*/
/* class */
class Dummy
{
public:
	void foo(){cout << "Dummy::foo" << endl;}
	static void poo(){cout << "Dummy::poo" << endl;}
};

/* Normal function */
void boo()
{
	cout << "boo" << endl;
}
/*------------------------------------------------------*/

/* function pointer */
void (*fPtr)();

/* member function pointer*/
void (Dummy::*mPtr)();

/* static member function pointer*/
void (*sPtr)();


int main()
{
	Dummy d;
	
	mPtr = &Dummy::foo;
	fPtr = &boo;
	sPtr = &Dummy::poo;
	
	(d.*mPtr)();
	fPtr();
	sPtr();

	return 0;
}