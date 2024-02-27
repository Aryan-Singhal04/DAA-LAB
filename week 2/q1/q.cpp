#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> &arr, int key, int n)
{
    int low = 0, high = n - 1;
    int result = -1;        // Initialize the result to -1 (indicating key not found)

    // Binary search algorithm
    while (low <= high) {
        int mid = low + (high - low) / 2;       // Calculate the middle index

        if (arr[mid] == key) {
            result = mid;          // Update the result to the current middle index
            high = mid - 1;         // Continue searching towards the left of the array
        } else if (arr[mid] < key) {
            low = mid + 1;          // If the key is greater, search the right half
        } else {
            high = mid - 1;         // If the key is smaller, search the left half
        }
    }

    return result; // Return the index of the first occurrence of the key
}

// Function to find the last occurrence of a key in a sorted array
int lastOccurence(vector<int> &arr, int key, int n)
{
    int low = 0, high = n - 1;
    int result = -1;        // Initialize the result to -1 (indicating key not found)

    // Binary search algorithm
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index

        if (arr[mid] == key) {
            result = mid;        // Update the result to the current middle index
            low = mid + 1;       // Continue searching towards the right of the array
        } else if (arr[mid] < key) {
            low = mid + 1;      // If the key is greater, search the right half
        } else {
            high = mid - 1;      // If the key is smaller, search the left half
        }
    }

    return result;              // Return the index of the last occurrence of the key
}
int main()
{

    int i,n,k;
    cout<<"enter total elements";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter k";
    cin>>k;
    cout<<"enter elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j1,j2;
    j1=firstOccurence(arr, k,n);
    j2=lastOccurence(arr, k,n);
    int j3=abs(j2-j1)+1;
    cout<<j3;
    return 0;
}
