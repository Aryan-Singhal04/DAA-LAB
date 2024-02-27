
 #include<iostream>
 #include<vector>
 using namespace std;
 void merge(vector<int> &arr, int l, int mid, int r) {
    // Calculate sizes of two subarrays to be merged
    int n1 = mid - l + 1, n2 = r - mid;

    // Create temporary arrays to hold elements of two subarrays
    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // Merge the temporary arrays back into arr[l..r]

    // Initial indexes of first and second subarrays
    int i = 0, j = 0;

    // Initial index of merged subarray
    int k = l;

    // Merge the two arrays back into arr[l..r]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// This function implements the merge sort algorithm
void sort(vector<int> &arr, int l, int r) {
    // Base case: if l is less than r, there is at least one element in the array
    if (l < r) {
        // Find the middle point
        int mid = l + (r - l) / 2;

        // Sort first and second halves
        sort(arr, l, mid);
        sort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
}

// This function checks if there are any duplicates in the array
bool findDup(vector<int> &arr, int n) {
    // Sort the array in non-decreasing order using merge sort
    sort(arr, 0, n);

    // Check adjacent elements for duplicates
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true; // If a duplicate is found, return true
        }
    }
    return false; // If no duplicates are found, return false
}
int main()
{
    int n,t;
    cout<<"no of test cases";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter no elements";
        cin>>t;
         vector<int> arr(t);
        cout<<"enter elements"<<endl;
        for(int j=0;j<t;j++)
        {
            cin>>arr[t];
        }
        bool ans;
        ans=findDup(arr,t);
        cout<<ans<<endl;
    }
    return 0;
}
