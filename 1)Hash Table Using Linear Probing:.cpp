#include &lt;iostream&gt;
using namespace std;
#define SIZE 10
int hashFunction(int key) {
    return key % SIZE;
}
void insert(int table[], int key) {
    int index = hashFunction(key);
    while (table[index] != -1) {
        index = (index + 1) % SIZE;
    }
    table[index] = key;
}
void display(int table[]) {
    for (int i = 0; i &lt; SIZE; i++) {
        cout &lt;&lt; i &lt;&lt; &quot; : &quot; &lt;&lt; table[i] &lt;&lt; &quot;\n &quot;;
    }
}
int main() {
    int table[SIZE];
    for (int i = 0; i &lt; SIZE; i++)
        table[i] = -1;
    int n;
    cout&lt;&lt;&quot;Enter number of elements: &quot;;
    cin &gt;&gt; n;
    cout&lt;&lt;&quot;Enter the elements: &quot;;
    for (int i = 0; i &lt; n; i++) {
        int x;
        cin &gt;&gt; x;
        insert(table, x);

    }
    display(table);
    return 0;
}
