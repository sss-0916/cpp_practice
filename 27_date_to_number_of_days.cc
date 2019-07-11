#include <iostream>

bool isLeapYear(int year){
	if((year % 4 == 0 && year % 100 != 0) ||
			year % 400 == 0){
		return true;
	}

	return false;
}

int getNumberDays(int year, int month, int day){
	static int Month[13] = {
		0, 0, 31, 59, 90, 120, 151, 181,
		212, 243, 273, 304, 334
	};

	if(month > 2 && isLeapYear(year)){
		return Month[month] + 1 + day;
	}

	return Month[month] + day;
}

int main(){
	int year, month, day;

	std::cin >> year >> month >> day;

	std::cout << getNumberDays(year, month, day) << std::endl;

	return 0;
}
