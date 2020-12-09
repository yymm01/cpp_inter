#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

struct Pixel{
	unsigned int blue : 5;
	unsigned int green : 6;
	unsigned int red : 5;
};

union Convert16
{
	Pixel pix;
	unsigned short us;
};

int main(){

	unsigned short color = 0x1234;
	Convert16 c;
	c.us = color;
	
	cout << bitset<16>(color) << endl;
	cout << bitset<16>(c.pix.red) << " / red : " << c.pix.red << endl;
	cout << bitset<16>(c.pix.green) << " / green : " << c.pix.green << endl;
	cout << bitset<16>(c.pix.blue) << " / blue : " << c.pix.blue << endl;

	return 0;
}

