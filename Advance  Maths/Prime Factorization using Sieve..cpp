int n = 100100;
vector<int> spf(n + 1);

class Solution
{
public:
    // seive is storing values from 1 to N and we store it with its smallest prime factor
    void sieve()
    {
        // first storing every number with it only
        for (int i = 1; i <= n; i++)
        {
            spf[i] = i;
        }
        // then storing numbers with its smallest prime factor,running loop till sqrt(n),as prime
        // factors a number are less than equal to sqrt(n)
        for (int i = 2; i * i <= n; i++)
        { // if condition for limiting the loop to check for prime numbers only
            if (spf[i] == i)
            { // this loop for 2 goes as->4,6,8,10....for 3 goes as->9,12,15..
                for (int j = i * i; j <= n; j = j + i)
                { // change the value with the new smallest prime value..
                  // this if condition ensures that only position with value itself must be changed
                  // here it goes in from smallest to largest
                    if (spf[j] == j)
                        spf[j] = i;
                }
            }
        }
    }

    vector<int> findPrimeFactors(int N)
    {

        // Write your code here
        vector<int> a;
        sieve();
        // run the loop till N!=1 as after that no prime factors
        while (N != 1)
        { // in each step we are reducing the input N and then checking for that N
            a.push_back(spf[N]);
            N = N / spf[N];
        }
        sort(a.begin(), a.end());
        return a;
    }
};