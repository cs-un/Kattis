#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	while(n!= -1)
	{
		int time = 0;
		int miles = 0;
		for(int i = 0; i < n; ++i)
		{
			int s, t;
			cin >> s >> t;
			miles+= (t-time)*s;
			time+=(t-time);
		}
		cout << miles << " miles" << endl;
		cin >> n;
	}
	return 0;
}
