#include <stdio.h>

int minmax(int A[7], int l, int r)
{

    int min, max;

    // for only one element

    if (l == r)
    {
        min = A[l];
        max = A[l];
    }

    // Two elements
    else if (r = l + 1)
    {

        if (A[l] > A[r])
        {
            min = A[r];
            max = A[l];
        }
        else
        {
            min = A[r];
            max = A[l];
        }
    }

    // more than two elements

    else
    {

        int mid = (l + r) / 2;
        int left_part[] = minmax(A, l, mid);
        int right_part[] = minmax(A, mid + 1, r);

        if (left_part[0] > right_part[0])
        {
            max = left_part[0];
        }

        else
        {
            max = right_part[0];
        }

        if (left_part[1] < right_part[1])
        {
            min = left_part[1];
        }

        else
        {
            min = right_part[1];
        }

        int ans[] = {min, max};
        return ans;

} // end

    int main()
    {

        int A[7] = {10, 20, 30, 40, 50, 60, 70};
        int l = 0;
        int r = 6;

        int B[2] = minmax(A[7], l, r);

        printf("minimum number is %d", B[0]);
        printf("maximum number is %d", B[1]);

        return 0;
    }