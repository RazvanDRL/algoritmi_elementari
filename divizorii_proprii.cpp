void divizorii_proprii(int n)
{
    for (int d = 2; d <= n / 2; d++)
        if (n % d == 0)
            cout << d << " ";
}