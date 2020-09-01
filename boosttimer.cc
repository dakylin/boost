#include <iostream>
#include <boost/timer.hpp>
#include <boost/thread.hpp>
int main()
{
	boost::timer t;
	std::cout << "Max timespan:" << t.elapsed_max()/3600 << "h" << std::endl;
	std::cout << "Min timespan:" << t.elapsed_min() << "s" <<std::endl;
	std::cout << "Now time elapsed:" << t.elapsed() << "s" << std::endl;
	boost::thread::sleep(boost::get_system_time() + boost::posix_time::seconds(5));
	std::cout << "Now time elapsed:" << t.elapsed() << "s" << std::endl;

	t.restart();
	boost::thread::sleep(boost::get_system_time() + boost::posix_time::seconds(5));
	std::cout << "Now time elapsed:" << t.elapsed() << "s" << std::endl;
	
}
