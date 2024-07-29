#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int counter = 0;
mutex mtx;

void countUpToTwenty(){

	mtx.lock();

	for (int i = 0; i < 20; i++){
		counter++;
	}
	mtx.unlock();
}

void countDownFromTwenty(){

	mtx.lock();
	for(int i = 0; i < 20; i++){
		counter--;
	}
	mtx.unlock();
}

int main(){

	thread t1(countUpToTwenty);
	t1.join();
	cout << "Counter at : "<<counter << " after first thread.";

	thread t2(countDownFromTwenty);
	t2.join();
	cout << "Counter at : "<<counter << " after second thread.";




}