#include <boost/progress.hpp>
#include <boost/thread.hpp>
int main()
{
	boost::progress_timer pt;
	boost::thread::sleep(boost::get_system_time() + boost::posix_time::seconds(5));
	return 0;
}
