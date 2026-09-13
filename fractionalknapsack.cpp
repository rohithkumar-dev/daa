#include <bits/stdc++.h>
using namespace std;

void knapsack(int wt[], int val[], int n, int cap)
{
    double ratio[100];
   
    for (int i = 0; i &lt; n; i++)
        ratio[i] = (double)val[i] / wt[i];

    for (int i = 0; i &lt; n - 1; i++)
    {
        for (int j = i + 1; j &lt; n; j++)
        {
            if (ratio[i] &lt; ratio[j])
            {

                double t = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = t;

                t = wt[i];
                wt[i] = wt[j];
                wt[j] = t;

                t = val[i];
                val[i] = val[j];
                val[j] = t;
            }
        }
    }

    double total = 0;

    for (int i = 0; i &lt; n; i++)
    {
        if (cap &gt;= wt[i])
        {
            cap -= wt[i];
            total += val[i];
        }
        else
        {
            total += ratio[i] * cap;
            break;
        }
    }

    cout &lt;&lt; &quot;Maximum value = &quot; &lt;&lt; total;
}

int main()
{
    int wt[100], val[100], n, cap;

    cout &lt;&lt; &quot;Enter number of items: &quot;;
    cin &gt;&gt; n;

    cout &lt;&lt; &quot;Enter weights: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; wt[i];

    cout &lt;&lt; &quot;Enter values: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; val[i];

    cout &lt;&lt; &quot;Enter capacity: &quot;;
    cin &gt;&gt; cap;

    knapsack(wt, val, n, cap);

    return 0;
}
