#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findindices(vector<int> &arr ,int n)
{
    // Create an unordered_map to store the indices of array elements
    // The key is the element value, and the value is its index in the array
    unordered_map<int,int> mp;
    // Create a vector to store the result indices
    vector<int> res;
    // Store the indices of array elements in the unordered_map
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]] = i;
    }
    // Iterate through the array to find indices i, j, k such that arr[i] + arr[j] = arr[k]
    for(int i = 0; i < n; i++)
    {
        // Iterate from i+1 to n-1 to find j such that j > i
        for(int j = i + 1; j < n; j++)
        {
            // Calculate the sum of arr[i] and arr[j]
            int x = arr[i] + arr[j];

            // Check if the sum x exists in the map and the indices are distinct
            if(mp.find(x) != mp.end() && mp[x] != i && mp[x] != j)
            {
                // If conditions are satisfied, add indices i, j, and k to the result vector
                res.push_back(i);
                res.push_back(j);
                res.push_back(mp[x]);
                // Return the result vector as soon as the first valid triplet is found
                // Note: There may be multiple valid triplets, but we return only the first one found
                return res;
            }
        }
    }
    // If no valid triplet is found, return an empty result vector
    return res;
}
int main()
{

    int i,n,k;
    cout<<"enter total elements";
    cin>>n;
    vector<int> arr(n),output;
    cout<<"enter k";
    cin>>k;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    output=findindices(arr ,n);
    for(int i=0;i<n;i++)
    {
        cout<<output[i];
    }

    return 0;
}

