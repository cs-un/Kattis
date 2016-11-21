#include <iostream>
#include <algorithm>

int main(void) {
	int a, b;
	std::cin >> a >> b;
	char arr[a][b];
	char c;
	int r = 0;
	int col = 0;
	int elements = a*b;
	while(elements-->0)
	{
		std::cin >> c;
		arr[r][col] = c;
		col++;
		if(col == b){
			r++;
			if(r == a)
				break;
			col = 0;
		}
	}
	int currX = 0, currY = 0;
	bool visited[a][b];
	for(int i = 0; i < a; ++i)
	{
		for(int c = 0; c < b; ++c)
			visited[i][c] = false;
	}
	int moves = 0;
	bool out = false;
	while(true)
	{
		switch(arr[currY][currX])
		{
			case 'E':
			currX++;
			if(currX >= b)
				out = true;
			break;
			case 'W':
			currX--;
			if(currX < 0)
				out = true;
			break;
			case 'S':
			currY++;
			if(currY >= a)
				out = true;
			break;
			case 'N':
			currY--;
			if(currY < 0)
				out = true;
			break;
			case 'T':
			std::cout << moves << std::endl;
			return 0;
			break;
		}
		if(out)
		{
			std::cout << "Out" << std::endl;
			break;
		}
		if(visited[currY][currX])
		{
			std::cout << "Lost" << std::endl;
			break;
		}
		else
			visited[currY][currX] = true;
		moves++;
	}
	return 0;   
}