#include <stdio.h>
int is_palindrome(int arr[], int n)
{
    for (int i=0; i<n/2; i++)
    {
        if (arr[i] != arr[n-i-1])
        {
            return 0;     // Not a palindrome
        }
    }
    return 1;        // Palindrome
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (is_palindrome(arr, n))
    {
        printf("The array is a palindrome.\n");
    }
    else
    {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}

