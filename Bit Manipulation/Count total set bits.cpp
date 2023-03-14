class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if (n <= 1)
            return n;
        int x = log2(n);

        return (pow(2, x - 1) * x) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
    }
};
// suppose n=11,so binary numbers from 0-11 →

// 0000→0

// 0001→1

// 0010→2

// 0011→3

// 0100→4

// 0101→5

// 0110→6

// 0111→7

// 1000→8

// 1001→9

// 1010→10

// 1011→11

// find highest power of 2 less than equal to 11

// which is 8=2^3 .Now you can observe that from 0-7

// all numbers have last binary bit as (0,1,0,1,0,1,0,1) having 8/2=4 set bits similarly observe second last bit of 0-7

// (0,0,1,1,0,0,1,1) →8/2=4 set bits similarly last third (0,0,0,0,1,1,1,1)=8/2=4;

// so combining all we get 3*(8/2) set bits. If we consider 3=x then generalising above  expression we get

// ans= x*(2^(x-1)

// Now from 8-11 all numbers have first bit from left as 1

// so adding (11-8+1) or (n-(2^x)+1) in ans. In the remaining part we recursively call the same function for (11-8) or

// (n-(2^x))