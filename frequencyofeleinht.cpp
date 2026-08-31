#include &lt;iostream&gt;
using namespace std;
#define SIZE 1000
int hashFunction(int x) {
    if (x &lt; 0)
        x = -x;
    return x % SIZE;
}
int main() {
    int n;
    cout&lt;&lt;&quot;Enter the number of elements:&quot;;
    cin &gt;&gt; n;
    int a[n];
    cout&lt;&lt;&quot;Enter the elements: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];
    int key[SIZE];
    int freq[SIZE];
    for (int i = 0; i &lt; SIZE; i++) {
        key[i] = -1;
        freq[i] = 0;
    }
    for (int i = 0; i &lt; n; i++) {
        int index = hashFunction(a[i]);
        while (key[index] != -1 &amp;&amp; key[index] != a[i]) {
            index = (index + 1) % SIZE;
        }

        if (key[index] == -1)
            key[index] = a[i];
        freq[index]++;
    }
    for (int i = 0; i &lt; SIZE; i++) {
        if (key[i] != -1)
            cout &lt;&lt; key[i] &lt;&lt; &quot; : &quot; &lt;&lt; freq[i] &lt;&lt; endl;
    }
    return 0;
}
