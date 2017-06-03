#include <iostream>
#include <string>
#include <iomanip>

int main(void) {
	double hh = 0, mm = 0, ss = 0;
	double dist = 0;
	double speed = 0;
	std::cout << std::fixed << std::setprecision(2);
	std::string line;
	while(std::getline(std::cin, line))
	{
		double h = std::stod(line.substr(0,2));
		double m = std::stod(line.substr(3,2));
		double s = std::stod(line.substr(6,2));
		dist+= (h-hh) * speed;
		dist+= ((m-mm) * speed)/60;
		dist+= ((s-ss) * speed)/3600;
		hh = h;
		mm = m;
		ss = s;
		if(line.length() > 8)
			speed = std::stod(line.substr(9));
		else
			std::cout << line << " " << dist << " km\n"; 
	}
	return 0;   
}
