class Solution
{
public:
    string armstrongNumber(int n)
    {
        // code here
        int ogNo = n;
        int sum = 0;
        int temp = n;
        int count = 0;
        while (temp != 0)
        {
            temp /= 10;
            count++;
        }
        while (n != 0)
        {
            int rem = n % 10;
            sum = sum + pow(rem, count);
            n /= 10;
        }
        if (ogNo == sum)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};