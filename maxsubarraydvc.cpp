#include <bits/stdc++.h>
using namespace std;

int maxCross(int a[], int low, int mid, int high)
{
    int sum = 0, left = -100000, right = -100000;

    for (int i = mid; i &gt;= low; i--)
    {
        sum += a[i];
        if (sum &gt; left)
            left = sum;
    }

    sum = 0;

    for (int i = mid + 1; i &lt;= high; i++)
    {

        sum += a[i];
        if (sum &gt; right)
            right = sum;
    }

    return left + right;
}

int maxSub(int a[], int low, int high)
{
    if (low == high)
        return a[low];

    int mid = (low + high) / 2;

    int left = maxSub(a, low, mid);
    int right = maxSub(a, mid + 1, high);
    int cross = maxCross(a, low, mid, high);

    if (left &gt;= right &amp;&amp; left &gt;= cross)
        return left;
    else if (right &gt;= left &amp;&amp; right &gt;= cross)
        return right;
    else
        return cross;
}

int main()
{
    int a[100], n;

    cout &lt;&lt; &quot;Enter size: &quot;;
    cin &gt;&gt; n;

    cout &lt;&lt; &quot;Enter elements: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];

    cout &lt;&lt; &quot;Maximum subarray sum = &quot;
         &lt;&lt; maxSub(a, 0, n - 1);

    return 0;
}
