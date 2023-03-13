class Solution
{
public:
    int findXOR(int n)
    {
        // complete the function here
        int mod = n % 4;

        if (mod == 0)
            return n;
        else if (mod == 1)
            return 1;
        else if (mod == 2)
            return n + 1;
        else if (mod == 3)
            return 0;
    }
    int findXOR(int l, int r)
    {
        return (findXOR(l - 1) ^ (findXOR(r)));
    }
};