#include <iostream>
#include <string>

std::string translate(int n)
{
	std::string ret = "";
	if(n>99)
	{
		ret.append(translate((n-n%100)/100));
		ret.append("hundred");
	}
	if(n%100 > 19)
	{
		switch(n%100 - n%10){
			case 20:
			ret.append("twenty");
			break;
			case 30:
			ret.append("thirty");
			break;
			case 40:
			ret.append("forty");
			break;
			case 50:
			ret.append("fifty");
			break;
			case 60:
			ret.append("sixty");
			break;
			case 70:
			ret.append("seventy");
			break;
			case 80:
			ret.append("eighty");
			break;
			case 90:
			ret.append("ninety");
			break;
		}
		if(n%10 != 0)
			ret.append(translate((n%10)));
	}
	if(n%100 < 20)
	{
		switch(n%100){
			case 1:
			ret.append("one");
			break;
			case 2:
			ret.append("two");
			break;
			case 3:
			ret.append("three");
			break;
			case 4:
			ret.append("four");
			break;
			case 5:
			ret.append("five");
			break;
			case 6:
			ret.append("six");
			break;
			case 7:
			ret.append("seven");
			break;
			case 8:
			ret.append("eight");
			break;
			case 9:
			ret.append("nine");
			break;
			case 10:
			ret.append("ten");
			break;
			case 11:
			ret.append("eleven");
			break;
			case 12:
			ret.append("twelve");
			break;
			case 13:
			ret.append("thirteen");
			break;
			case 14:
			ret.append("fourteen");
			break;
			case 15:
			ret.append("fifteen");
			break;
			case 16:
			ret.append("sixteen");
			break;
			case 17:
			ret.append("seventeen");
			break;
			case 18:
			ret.append("eighteen");
			break;
			case 19:
			ret.append("nineteen");
			break;
		}
	}
	return ret;
}

void fillArray(std::string *output)
{
	for(int i = 0; i < 1000; ++i)
	{
		std::string x = translate(i);
		if((i - x.length()) >= 0 && (i - x.length()) < 1000){
			if(output[i - x .length()].empty())
				output[i - x.length()] = x;
		}
	}
}

int main() {
	std::string output[1000] = {};
	fillArray(output);
	int n;
	std::cin >> n;
	std::string word[n];
	int number;
	int sum = 0;
	for(int i = 0; i < n; ++i)
	{
		std::cin >> word[i];
		if(word[i] == "$")
			number = i;
		else{
			sum+=word[i].length();
		}
	}
	word[number] = output[sum];
	for(int c = 0; c < n; ++c)
	{
		std::cout << word[c] << " ";
	}
	return 0;
}
