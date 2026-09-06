#include<iostream>
using namespace std;

void bucketSort(int a[], int n)
{
    int b[100] = {0};

    for(int i = 0; i &lt; n; i++)
        b[a[i]]++;

    int k = 0;

    for(int i = 0; i &lt; 100; i++)
    {
        while(b[i] &gt; 0)
        {
            a[k++] = i;
            b[i]--;

        }
    }
}

int main()
{
    int a[100], n;

    cout &lt;&lt; &quot;Enter number of elements: &quot;;
    cin &gt;&gt; n;

    cout &lt;&lt; &quot;Enter elements (0-99): &quot;;
    for(int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];

    bucketSort(a, n);

    cout &lt;&lt; &quot;Sorted array: &quot;;
    for(int i = 0; i &lt; n; i++)
        cout &lt;&lt; a[i] &lt;&lt; &quot; &quot;;

    return 0;
}
