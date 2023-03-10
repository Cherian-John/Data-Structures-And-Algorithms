class Solution
{
public:
    string oddEven(int N)
    {
        // code here
        if (N & (1 << 0) == 1)
        {
            cout << "odd";
        }
        else
        {
            cout << "even";
        }
    }
};