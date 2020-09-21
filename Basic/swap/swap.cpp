#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b  = tmp;
	
	cout << __func__ << " a : " << *a << " / b: " << *b << endl;
}

void xor_swap(int *a, int *b)
{
	if(*a != *b){
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
	cout << __func__ << " a : " << *a << " / b: " << *b << endl;
}

int main()
{
	int *a = new int;
	int *b = new int;
	int *c = new int;
	int *d = new int;
	
	*a = 10;
	*b = 20;
	*c = 10;
	*d = 20;
	
	swap(a,b);
	xor_swap(c,d);
	
	delete a;
	delete b;
	delete c;
	delete d;
	
}
