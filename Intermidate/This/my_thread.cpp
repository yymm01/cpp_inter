#include <iostream>
#include <pthread.h>

using namespace std;

class BThread
{
	pthread_t th;
public:
		void run(){
			pthread_create(&th, NULL, CThread, (void*)this);
		}

		void join(){
			pthread_join(th, NULL);
		}

		static void* CThread(void* cookie){
			BThread* const self = static_cast<BThread*>(cookie);

			self->th_loop();
			return NULL;
		}

		virtual void th_loop() = 0;
		virtual ~BThread(){
				cout << "destructor parent " << endl;
			}
};

class my_thread : public BThread
{
public:
	 virtual void th_loop() {cout << "derived th loop" << endl;}
	 virtual ~my_thread(){ cout << "destructor derived" << endl;}
};

int main()
{
	my_thread m;
	m.run();
	m.join();

	my_thread* bt = new my_thread;
	bt->run();
	bt->join();
	delete bt;

	BThread* bt2 = new my_thread;
	bt2->run();
	bt2->join();
	delete bt2;

	return 0;
}