class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        // Your logic here
        int max, count = 0;
        if (a > b)
            max = a;
        else
            max = b;
        while (max > 0)
        {
            if ((a & 1) != (b & 1))
            {
                count++;
            }
            a = a >> 1;
            b = b >> 1;
            max = max >> 1;
        }
        return count;
    }
};