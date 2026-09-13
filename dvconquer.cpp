#include <bits/stdc++.h>
using namespace std;
void findMinMax(int a[], int low, int high, int &amp;mn, int &amp;mx)
{
    if (low == high)
    {
        mn = mx = a[low];
        return;
    }
    int mid = (low + high) / 2;
    int min1, max1, min2, max2;
    findMinMax(a, low, mid, min1, max1);
    findMinMax(a, mid + 1, high, min2, max2);

    mn = (min1 &lt; min2) ? min1 : min2;
    mx = (max1 &gt; max2) ? max1 : max2;
}
int main()
{
    int a[100], n, mn, mx;
    cout &lt;&lt; &quot;Enter size: &quot;;
    cin &gt;&gt; n;

    cout &lt;&lt; &quot;Enter elements: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];

    findMinMax(a, 0, n - 1, mn, mx);

    cout &lt;&lt; &quot;Minimum = &quot; &lt;&lt; mn &lt;&lt; endl;
    cout &lt;&lt; &quot;Maximum = &quot; &lt;&lt; mx;
    return 0;
}
