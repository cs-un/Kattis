#include <iostream>
#include <vector>
#include <math.h>

struct beehive{
	float x;
	float y;
	bool sour;
};

float dist(float a, float b, float c, float d)
{
	return sqrt(pow((c-a),2) + pow((d-b),2));
}

int main(void) {
	float d;
	int n;
	while(std::cin >> d >> n)
	{
		if(n == 0)
			break;
		std::vector<beehive> hives;
		for(int i = 0; i < n; ++i)
		{
			beehive temp;
			float x, y;
			std::cin >> x >> y;
			temp.x = x;
			temp.y = y;
			temp.sour = false;
			hives.push_back(temp);
		}
		int sour = 0;
		for(int i = 0; i < n - 1; ++i)
		{
			for(int c = i + 1; c < n; ++c)
			{
				if(dist(hives[i].x,hives[i].y,hives[c].x,hives[c].y) <=d)
				{
					std::cout << dist(hives[i].x,hives[i].y,hives[c].x,hives[c].y) << std::endl;
					if(!hives[i].sour)
					{
						sour++;
						hives[i].sour = true;
					}
					if(!hives[c].sour)
					{
						sour++;
						hives[c].sour = true;
					}
				}
			}
		}
		std::cout << sour << " sour, " << n - sour << " sweet" << std::endl; 
	}
    return 0;   
}
