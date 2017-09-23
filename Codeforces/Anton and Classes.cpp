#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n;
	vector<pair<int,int>> first;
	for (int i = 0; i < n; i++)
	{
		pair<int,int> p;
		cin >> p.first >> p.second;
		first.push_back(p);
	}
	cin >> m;
	vector<pair<int,int>> second;
	for (int i = 0; i < m; i++)
	{
		pair<int,int> p;
		cin >> p.first >> p.second;
		second.push_back(p);
	}
	
	int dif = 0;
	
	auto comp = [](pair<int,int>& l, pair<int,int>& r)
	{
		if (l.first != r.first)
			return l.first < r.first;
		return l.second < r.second;
	};
	auto comp2 = [](pair<int,int>& l, pair<int,int>& r)
	{
		if (l.second != r.second)
			return l.second > r.second;
		return l.first > r.first;
	};
	sort(first.begin(), first.end(), comp2);
	sort(second.begin(), second.end(), comp);
	int dif2 = second.back().first - first.back().second;
	if (dif2 > 0)
		dif = dif2;
		
	sort(first.begin(), first.end(), comp);
	sort(second.begin(), second.end(), comp2);
	int dif3 = first.back().first - second.back().second;
	if (dif3 > 0 && (dif3 > dif || dif == 0))
		dif = dif3;
	cout << dif <<'\n';
	return 0;
}