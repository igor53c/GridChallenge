// GridChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string gridChallenge(vector<string>);

int main()
{
	//vector<string> grid = { "ebacd", "fghij", "olmkn", "trpqs", "xywuv" };
	//vector<string> grid = { "mpxz", "abcd", "wlmf" };
	//vector<string> grid = { "kc", "iu" };
	vector<string> grid = { "uxf", "vof", "hmp"};

	cout << gridChallenge(grid) << endl;

	return EXIT_SUCCESS;
}

string gridChallenge(vector<string> grid) {

	vector<string> grid2;

	for (std::string word : grid)
	{
		std::sort(word.begin(), word.end());

		grid2.push_back(word);
	}

	for (int i = 0; i < grid2[0].length(); i++)
	{
		for (int j = 1; j < grid2.size(); j++)
		{
			if (grid2[j][i] < grid2[j - 1][i])
				return "NO";
		}
	}

	return "YES";
}
