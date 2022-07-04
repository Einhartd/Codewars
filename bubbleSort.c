void bubbleSort(int arr[], int n)
{
    int i, j, temp, flag = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // introducing a flag to monitor swapping
            if (arr[j] > arr[j + 1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // if swapping happens update flag to 1
                flag = 1;
            }
        }
        // if value of flag is zero after all the iterations of inner loop
        // then break out
        if (flag == 0)
        {
            break;
        }
    }