#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

#define PI 3.14159265358979323846

int main(void) {
	int t;
	std::cin >> t;
	std::cout << std::fixed;
	while(t--){
		int n;
		std::cin >> n;
		double x = 0, y = 0;
		int angle = 0;
		for(int i = 0; i < n; ++i){
			std::string s;
			int param;
			std::cin >> s >> param;
			if(s == "fd")
			{
					x += param * cos(PI * angle/180);
					y += param * sin(PI * angle/180);
			}
			else if(s == "bk")
			{
					x -= param * cos(PI * angle/180);
					y -= param * sin(PI * angle/180);
			}
			else if(s == "lt")
				angle = (angle + param) % 360;
			else if(s == "rt")
				angle = (angle - param) % 360;
			/*
			switch(std::stoi(s.substr(0,2)))
			{
				case std::stoi("fd"):
					x += std::stod(s.substr(4)) * cos(PI * angle/180);
					y += std::stod(s.substr(4)) * sin(PI * angle/180);
				break;
				case std::stoi("bk"):
					x -= std::stod(s.substr(4)) * cos(PI * angle/180);
					y -= std::stod(s.substr(4)) * sin(PI * angle/180);
				break;
				case std::stoi("lt"):
				angle = angle - std::stoi(s.substr(4)) % 360;
				break;
				case std::stoi("rt"):
				angle = angle + std::stoi(s.substr(4)) % 360;
				break;
			}
			*/
		}
		long dist = round(sqrt(pow(x,2) + pow(y,2)));
		std::cout << dist << std::endl;
	}
	return 0;   
}
