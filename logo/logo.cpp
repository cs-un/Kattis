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
		while(n--){
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
			else
				angle = (angle - param) % 360;
		}
		long dist = round(sqrt(pow(x,2) + pow(y,2)));
		std::cout << dist << std::endl;
	}
	return 0;   
}
