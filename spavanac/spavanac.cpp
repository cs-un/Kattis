#include <iostream>

int main(void) {
	int min, h;
	std:: cin >> h >> min;
	min-=45;
	if(min < 0){
		min +=60;
		h--;
	}
	if(h < 0)
		h = 23;
	std::cout << h << " " << min << std::endl;
	return 0;   
}
