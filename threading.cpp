#include <iostream>       // std::cout
#include <thread>         // std::thread, std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <mutex>

int i = 10;
std::mutex mtx;
void pause_thread(int n) 
{
  std::this_thread::sleep_for (std::chrono::seconds(n));
  std::cout<<std::this_thread::get_id()<< "pause of " << n << " seconds ended\n";
}

void foo(){
	std::cout<<i<<" \n";
	mtx.lock();
	std::cout<<i<<" \n";
	for(int c=0;c<=10;c++){
		i++;
	}
	std::cout<<i<<" \n";
	mtx.unlock();
	std::cout<<i<<" \n";
}
 
int main() 
{

	std::thread t(foo);
	std::thread T(foo);
	

	
	
	
  	//std::cout << "Spawning and detaching 3 threads...\n";
  
  	//std::thread t0(pause_thread,2);
  	//std::thread t1(pause_thread,3);
	//std::thread t2(pause_thread,4);
  	//std::cout << "Done spawning threads.\n";
	//t2.join();
	//std::cout<<t2.joinable()<<std::endl;
	
  	//std::cout << "(the main thread will now pause for 5 seconds)\n";
  	// give the detached threads time to finish (but not guaranteed!):
  	//pause_thread(4);
  	return 0;
}