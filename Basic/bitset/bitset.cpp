#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int tmp = 255;
	cout << tmp << endl;
	cout << bitset<8>(tmp) << endl;
	cout << bitset<16>(tmp) << endl;
	cout << bitset<32>(tmp) << endl;
}