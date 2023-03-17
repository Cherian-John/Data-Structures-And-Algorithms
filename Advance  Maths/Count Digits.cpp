class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int temp = N;
        int count = 0;
        while (temp > 0)
        {
            int rem = temp % 10;
            if (rem > 0 && N % rem == 0)
            {
                count++;
            }
            temp /= 10;
        }
        return count;
    }
};