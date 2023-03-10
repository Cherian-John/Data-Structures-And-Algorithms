#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)
    { // for any number ,x^x=0 and x^0=x;
        // let x and y be the 2 number to find
        long long int a = 0;
        for (int i = 0; i < n; i++)
            a ^= arr[i];
        // now a is (x^y)

        long long int b = a & (-a); // b has the rightmost set bit of a.
        // this is difference between x and y, as one will have this bit as 1 and other 0.
        long long int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] & b) == 0) // split into two groups which gives 0&1 respectively
            {
                x ^= arr[i]; // xor
            }
            else
                y ^= arr[i];
        }
        if (x < y)
            swap(x, y); // returning in decreasing order.

        return {x, y};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int N;
        cin >> N;
        long long int Arr[N];
        for (long int i = 0; i < N; i++)
            cin >> Arr[i];
        Solution ob;
        vector<long long int> ans = ob.twoOddNum(Arr, N);
        for (long long int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}