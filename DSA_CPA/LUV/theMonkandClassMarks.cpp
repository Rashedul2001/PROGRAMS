#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<int, multiset<string>> result;
	int n, mark;
	string name;

	cin >> n;
	while (n--)
	{
		cin >> name >> mark;
		result[mark].insert(name);
	}
	auto curPos = --result.end();
	while (true)
	{
		auto &students = (*curPos).second;
		mark = (*curPos).first;
		for (auto student : students)
			cout << student <<' ' << mark << endl;

		if (curPos == result.begin())
			break;
		--curPos;
	}

	return 0;
}
