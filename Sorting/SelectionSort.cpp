class Solution
{
public:
    int select(int arr[], int i)
    {
        return 0;
    }
    void selectionSort(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
};