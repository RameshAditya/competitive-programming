#include<iostream>
#include<vector>
#include<stack>
using namespace std;

#include <vector>
using namespace std;
 
void LIS(vector<int> &seq, vector<int> &lis)
{
    vector<int> prev(seq.size());
    int lo, hi, mid;
 
    if (seq.empty()) return;
 
    lis.push_back(0);
 
    for(int i = 1; i < seq.size(); i++) 
    {
	// Add the newest element if it is the largest of the LIS
	if (seq[lis.back()] < seq[i])//Change the sign here for a >= subsequnce of a decreasing subsequence
	{
	    prev[i] = lis.back();
	    lis.push_back(i);
	    continue;
	}

	lo = 0;
	hi = lis.size()-1;
	// Perform a binary search to find which LIS it is the last element of
	while(lo < hi)
	{
	    mid = (lo + hi) / 2;
	    if (seq[lis[mid]] < seq[i]) //Change the sign here for a >= subsequnce of a decreasing subsequence

		lo=mid+1; else hi=mid;
	}
	// Check if the newest element is smaller
	if (seq[i] < seq[lis[lo]])//Change the sign here for a >= subsequnce of a decreasing subsequence 
	{
	    if (lo > 0)
		prev[i] = lis[lo-1];
	    lis[lo] = i;
	}	
    }
 
    for (lo = lis.size(), hi = lis.back(); lo>0;)
    {
	lo--;
	lis[lo] = hi;
	hi = prev[hi];
    }
}

int main()
{
    vector<int> seq;
    vector<int> lis;
    int n;
    while(cin >> n)
	seq.push_back(n);
    LIS(seq,lis);
    cout << lis.size() << endl << '-' << endl;
    for(int i = 0; i < lis.size(); i++)
    {
	cout << seq[lis[i]] << endl;
    }
    return 0;
}
