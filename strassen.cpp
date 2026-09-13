#include <bits/stdc++.h>
using namespace std;

void strassen(int a[2][2], int b[2][2], int c[2][2])
{
    int p1, p2, p3, p4, p5, p6, p7;

    p1 = a[0][0] * (b[0][1] - b[1][1]);
    p2 = (a[0][0] + a[0][1]) * b[1][1];
    p3 = (a[1][0] + a[1][1]) * b[0][0];
    p4 = a[1][1] * (b[1][0] - b[0][0]);

    p5 = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
    p6 = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);
    p7 = (a[0][0] - a[1][0]) * (b[0][0] + b[0][1]);

    c[0][0] = p5 + p4 - p2 + p6;
    c[0][1] = p1 + p2;
    c[1][0] = p3 + p4;
    c[1][1] = p5 + p1 - p3 - p7;
}

int main()
{
    int a[2][2], b[2][2], c[2][2];

    cout &lt;&lt; &quot;Enter first matrix:\n&quot;;
    for (int i = 0; i &lt; 2; i++)
        for (int j = 0; j &lt; 2; j++)
            cin &gt;&gt; a[i][j];

    cout &lt;&lt; &quot;Enter second matrix:\n&quot;;
    for (int i = 0; i &lt; 2; i++)
        for (int j = 0; j &lt; 2; j++)
            cin &gt;&gt; b[i][j];

    strassen(a, b, c);

    cout &lt;&lt; &quot;Result matrix:\n&quot;;
    for (int i = 0; i &lt; 2; i++)
    {
        for (int j = 0; j &lt; 2; j++)

            cout &lt;&lt; c[i][j] &lt;&lt; &quot; &quot;;
        cout &lt;&lt; endl;
    }

    return 0;
}
