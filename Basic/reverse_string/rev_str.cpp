#include <iostream>
#include <string>

using namespace std;

int main()
{
	char example[] = "scientia est potentia";
	string s = string(example);
	
	for(int i = s.length(); i >= 0; i--){
		cout << s[i];
	}
	cout << endl;

}
