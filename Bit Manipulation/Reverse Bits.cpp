class Solution
{
public:
    long long reversedBits(long long n)
    {
        // code here
        long long dn = 0; // variable for new decimal number
        int j = 30;       // initial value of j
        // loop to find the reversede binary bit
        for (int i = 0; i < 32; ++i)
        {
            int k = (n >> i) & 1; // k will be the required bit
            if (k)
            { // if bit is set then only convert in
              // decimal
                if (j == -1)
                { // since if j = -1 then left
                  // shift operator will not work
                    dn = abs(dn) + pow(2, 0);
                }
                else
                {
                    dn = abs(dn) + (2 << j); // here left shift operator
                                             // calculates 2 to power j
                                             // for making code efficient
                }
            }
            j--; // j is decreased in each iteration
        }
        return abs(dn);
    }
};