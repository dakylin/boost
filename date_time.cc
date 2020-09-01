//#define DATE_TIME_NO_DEFAULT_CONSTRUCTOR
#include <boost/date_time/gregorian/gregorian.hpp>
#include <iostream>

int main()
{
	boost::gregorian::date d1;
	bool isValid = d1.is_not_a_date();
	std::cout << "isValid=" << isValid << std::endl;
	//d1.
	boost::gregorian::date d2(2020,1,1);
	std::cout << "Year =" << d2.year() << std::endl
		<< ", Month as number=" << d2.month().as_number() << std::endl
		<< ", Month as enum=" << d2.month().as_enum() << std::endl
		<< ", Month as long string=" << d2.month().as_long_string() << std::endl
		//<< ", Month as long string=" << d2.month().as_long_wstring() << std::endl
		<< ", Month as long string=" << d2.month().as_short_string() << std::endl
		//<< ", Month as long string=" << d2.month().as_short_wstring() << std::endl
		<< ",day=" << d2.day() << std::endl;

	std::cout << "d2.day_count().as_number()=" << d2.day_count().as_number() << std::endl;
	
}
