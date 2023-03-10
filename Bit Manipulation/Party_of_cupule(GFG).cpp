class Solution
{
public:
    int findSingle(int N, int arr[])
    {
        // code here
        int res = 0;
        for (int i = 0; i < N; i++)
        {
            res = arr[i] ^ res;
        }
        return res;
    }
};