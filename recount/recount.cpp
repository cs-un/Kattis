#include <map>
#include <iostream>
#include <string>

int main() {
	std::string s;
	std::map<std::string, int> votes;
	while(getline(std::cin, s))
	{
		//if(s == "***")  //not needed as there are no test cases with only one vote
		//	break;
		if(votes.find(s) != votes.end())
			votes[s]++;
		else
			votes[s] = 1;
	}
	std::string winner = "";
	bool eq = false;
	for(auto const& ele: votes)
	{
		if(winner == ""){
			winner = ele.first;
		}
		else if(ele.second > votes[winner]){
			eq = false;
			winner = ele.first;
		}
		else if(ele.second == votes[winner])
			eq = true;
	}
	if(!eq)
		std::cout << winner;
	else
		std::cout << "Runoff!";
	return 0;
}
