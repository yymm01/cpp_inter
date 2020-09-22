#include <iostream>
#include <cstring>

using namespace std;

typedef struct console{
	int width;
	int height;
	int price;
	char name[50];
}marketConsole;

int main(){
	marketConsole c;
	c.width = 40;	
	c.height = 80;
	c.price = 500000;
	strcpy(c.name, "ps5 pro");
	
	cout << c.name << " / " << c.price << endl;
}