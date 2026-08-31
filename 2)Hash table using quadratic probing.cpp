#include &lt;iostream&gt;
using namespace std;
#define SIZE 10
int hashFunction(int key) {
    return key % SIZE;
}
void insert(int table[], int key) {
    int index = hashFunction(key);
    int i = 0;
    while (table[(index + i * i) % SIZE] != -1) {
        i++;
    }

    table[(index + i * i) % SIZE] = key;
}
void display(int table[]) {
    for (int i = 0; i &lt; SIZE; i++) {

        cout &lt;&lt; i &lt;&lt; &quot; : &quot; &lt;&lt; table[i] &lt;&lt; endl;
    }
}
int main() {
    int table[SIZE];
    for (int i = 0; i &lt; SIZE; i++)
        table[i] = -1;
    int n;
    cout&lt;&lt;&quot;Enter the number of elements: &quot;;
    cin &gt;&gt; n;
    cout&lt;&lt;&quot;Enter the Elements: &quot;;
    for (int i = 0; i &lt; n; i++) {
        int x;
        cin &gt;&gt; x;
        insert(table, x);
    }
    display(table);
    return 0;
}
