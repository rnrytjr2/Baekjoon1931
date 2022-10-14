
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N, answer = 1;
vector<pair<int, int>> meetingtime;
pair<int, int> lastmeeting;
int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		meetingtime.push_back(make_pair(b, a));
	}
	sort(meetingtime.begin(), meetingtime.end());
	lastmeeting = meetingtime[0];
	for (int i = 1; i < N; i++)
	{
		if (meetingtime[i].second >= lastmeeting.first)
		{
			answer++;
			lastmeeting = meetingtime[i];
		}
	}
	cout << answer;
}

