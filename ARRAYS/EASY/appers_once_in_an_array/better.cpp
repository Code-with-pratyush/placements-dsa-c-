#include <bits/stdc++.h>
using namespace std;

int appear_once(vector<int> &arr, int n)
{
  int maxi = arr[0];
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi, arr[i]);
  }
  vector<int> hash(maxi + 1, 0);
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]]++;
  }
  for (int i = 0; i < n; i++)
  {
    if (hash[arr[i]] == 1)
    {
      return arr[i];
    }
  }
  return -1;
}