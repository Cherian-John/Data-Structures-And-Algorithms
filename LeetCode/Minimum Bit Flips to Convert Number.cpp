class Solution
{
public:
    int minBitFlips(int start, int goal)
    {

        int max, count = 0;
        if (start > goal)
            max = start;
        else
            max = goal;
        while (max > 0)
        {
            if ((start & 1) != (goal & 1))
            {
                count++;
            }
            start = start >> 1;
            goal = goal >> 1;
            max = max >> 1;
        }
        return count;
    }
};