int binary_search(int low, int high, int a)
{
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (mid * mid == a)
        return mid;
    else if (mid * mid < a)
        return binary_search(mid + 1, high, a);
    else
        return binary_search(low, mid - 1, a);
}

int _sqrt_recursion(int n)
{
    const int a = n;

    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;

    return binary_search(0, n, a);
}

