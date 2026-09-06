#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int b[100], i = l, j = m + 1, k = 0;
    while(i &lt;= m &amp;&amp; j &lt;= r)
    {
        if(a[i] &lt; a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while(i &lt;= m)
        b[k++] = a[i++];

    while(j &lt;= r)
        b[k++] = a[j++];

    for(i = l, k = 0; i &lt;= r; i++, k++)
        a[i] = b[k];
}
void mergeSort(int a[], int l, int r)
{
    if(l &lt; r)
    {
        int m = (l + r) / 2;
        mergeSort(a, l, m);

        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int a[100], n;
    cout &lt;&lt; &quot;Enter number of elements: &quot;;
    cin &gt;&gt; n;
    cout &lt;&lt; &quot;Enter elements: &quot;;
    for(int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];
    mergeSort(a, 0, n - 1);
    cout &lt;&lt; &quot;Sorted array: &quot;;
    for(int i = 0; i &lt; n; i++)
        cout &lt;&lt; a[i] &lt;&lt; &quot; &quot;;

    return 0;
}
