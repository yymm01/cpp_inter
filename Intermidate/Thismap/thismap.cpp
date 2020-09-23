#include <iostream>
#include <map>


using namespace std;

class Sample
{
	static map<int, Sample*> mMap;
public:
	void run(){
		mMap[0] = this;
		transfer();
	}
	
	/* static function */
	static void transfer(){
		Sample* const p = static_cast<Sample*>(mMap[0]);
		p->foo();
	}

	/* member function */
	void foo(){
		cout << "foo" << endl;
	}	
};

map<int, Sample*> Sample::mMap;

int main()
{
	Sample s;
	s.run();
	
	return 0;
}