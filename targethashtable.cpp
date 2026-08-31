#include &lt;iostream&gt;
using namespace std;
#define SIZE 1000
int hashFunction(int x) {
    if (x &lt; 0)
        x = -x;
    return x % SIZE;
}
int main() {
    int n, T;
    int a[100];
    cout &lt;&lt; &quot;Enter number of elements: &quot;;
    cin &gt;&gt; n;
    cout &lt;&lt; &quot;Enter elements: &quot;;
    for (int i = 0; i &lt; n; i++)
        cin &gt;&gt; a[i];
    cout &lt;&lt; &quot;Enter target: &quot;;
    cin &gt;&gt; T;
    int table[SIZE];
    int indexTable[SIZE];

    for (int i = 0; i &lt; SIZE; i++) {
        table[i] = -1;
        indexTable[i] = -1;
    }
    for (int i = 0; i &lt; n; i++) {
        int need = T - a[i];

        int index = hashFunction(need);
        while (table[index] != -1) {
            if (table[index] == need) {
                cout &lt;&lt; &quot;Elements: &quot; &lt;&lt; need &lt;&lt; &quot; and &quot; &lt;&lt; a[i] &lt;&lt; endl;
                cout &lt;&lt; &quot;Indices: &quot; &lt;&lt; indexTable[index] &lt;&lt; &quot; and &quot; &lt;&lt; i &lt;&lt; endl;
                return 0;
            }
            index = (index + 1) % SIZE;
        }
        index = hashFunction(a[i]);
        while (table[index] != -1)
            index = (index + 1) % SIZE;
        table[index] = a[i];
        indexTable[index] = i;
    }
    cout &lt;&lt; &quot;No pair found&quot;;

    return 0;
}
