#include <boost/progress.hpp>
#include <vector>
#include <fstream>

int main()
{
	std::vector<int> v(100);
	std::ofstream of("c:/boost/test.txt");
	boost::progress_display pd(v.size());
	for (std::vector<int>::iterator it = v.begin();
		it != v.end(); ++it)
	{
		of << *it << std::endl;
		++pd;
	}
	return 0;
}