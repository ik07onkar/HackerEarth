#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll s,x,n,i=1,it=0,dist_traveled=0;
	cin>>s>>x>>n;

	ll day[n],dist[n];
	for(int i=0;i<n;i++)
	{
		cin>>day[i];
		cin>>dist[i];
	}

	vector< pair<int,int> > vect;
	for(int i=0; i<n; i++)
        vect.push_back( make_pair(day[i],dist[i]) );

    sort(vect.begin(), vect.end());
    for(int i=0; i<n; i++)
    {
        day[i] = vect[i].first;
        dist[i] = vect[i].second;
    }

	while(dist_traveled < s)
	{
		if(day[it] == i)
		{
			dist_traveled += dist[it];
			if(dist_traveled >= s)
				break;
			it++;
		}
		else
		{
			dist_traveled += x;
			if(dist_traveled >= s)
				break;
		}
		i++;
	}
	cout<<i;
	return 0;
}
