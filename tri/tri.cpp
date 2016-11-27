#include <iostream>

#define mul << "*" <<
#define min << "-" <<
#define plus << "+" <<
#define div << "/" <<
#define eq << "=" <<

int main(void) {
    int a, b, c;
    std:: cin >> a >> b >> c;
    if(a == b*c)
		std::cout << a eq b mul c;
	else if(a == b-c)
		std::cout << a eq b min c;
	else if(a == b+c)
		std::cout << a eq b plus c;
	else if(a == b/c)
		std::cout << a eq b div c;
	else
	{
	if(c == a*b)
		std::cout << a mul b eq c;
	else if(c == a-b)
		std::cout << a min b eq c;
	else if(c == a+b)
		std::cout << a plus b eq c;
	else if(c == a/b)
		std::cout << a div b eq c;
	}
    return 0;   
}
