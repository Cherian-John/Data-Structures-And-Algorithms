class Solution
{
public:
    int countPrimes(int N)
    {

        vector<int> prime(N + 1, 1);
        for (int i = 2; i * i < N; i++)
        {
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = 0;
            }
        }
        int count = 0;
        for (int i = 2; i < N; i++)
        {
            if (prime[i] == 1)
            {
                count++;
            }
        }
        return count;
    }
};