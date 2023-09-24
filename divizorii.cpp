void divizorii(int n)
{
    for (int d = 1; d * d <= n; d++)
        if (n % d == 0)
        {
            cout << d << " ";
            if (d * d < n)
                cout << n / d << " ";
        }
}