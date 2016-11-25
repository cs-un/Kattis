#include <iostream>

int dist(int a, int desired)
{
	return desired - a;
}

int main(void) {
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;
	std::cout << dist(a, 1) << " " << dist(b, 1) << " " << dist(c,2)
	<< " " << dist(d,2)<< " " << dist(e,2)<< " " << dist(f,8);
    return 0;   
}
