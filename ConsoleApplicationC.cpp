#include "stdafx.h"

#include <stdexcept>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

class TwoSum
{
public:
	static std::pair<int, int> findTwoSum(const std::vector<int>& list, int sum)
	{
		std::pair<int, int> wynik;
		wynik.first = -1;
		wynik.second = -1;
		std::vector <int> pomocnicza;
		pomocnicza = list;

		for (int i = 0; i < list.size(); i++)
		{

			for (int j = 0; j < pomocnicza.size(); j++) {

				if ((list[i] + pomocnicza[j]) == sum) {
					wynik.first = j;
					wynik.second = i;
				}
			}
		}

		//throw std::logic_error("Waiting to be implemented");
		return wynik;
	}
};

int main()
{
	std::vector<int> list;
	list.push_back(1);
	list.push_back(3);
	list.push_back(5);
	list.push_back(7);
	list.push_back(9);
	std::pair<int, int> indices = TwoSum::findTwoSum(list, 12);
	std::cout << indices.first << '\n' << indices.second << std::endl;
	system("PAUSE");
}