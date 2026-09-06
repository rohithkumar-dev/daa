#include<iostream>
using namespace std;

int partition(int a[], int l, int r)
{
int p = a[r];
int i = l - 1;

for(int j = l; j &lt; r; j++)
{
if(a[j] &lt; p)
{
i++;
swap(a[i], a[j]);
}
}

swap(a[i + 1], a[r]);
return i + 1;
}

void quickSort(int a[], int l, int r)
{
if(l &lt; r)
{

int p = partition(a, l, r);

quickSort(a, l, p - 1);
quickSort(a, p + 1, r);
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

quickSort(a, 0, n - 1);

cout &lt;&lt; &quot;Sorted array: &quot;;
for(int i = 0; i &lt; n; i++)
cout &lt;&lt; a[i] &lt;&lt; &quot; &quot;;

return 0;
}
