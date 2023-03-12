class Solution
{
public:
    int setBit(int N)

    {

        if (N & N + 1)
        {

            return N | N + 1;
        }
        else
        {

            return N;
        }
    }
};