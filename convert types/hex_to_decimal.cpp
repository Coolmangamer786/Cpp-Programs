#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;cmath&gt;
using namespace std;
int main() {
    string hex;
    cout &lt;&lt; "Enter a hexadecimal number: ";
    cin &gt;&gt; hex;
    int decimal = 0;
    int len = hex.length();
    for (int i = 0; i &lt; len; i++) {
        char c = hex[len - 1 - i];
        int val;
        if (c &gt;= '0' &amp;&amp; c &lt;= '9') {
            val = c - '0';
        } else if (c &gt;= 'A' &amp;&amp; c &lt;= 'F') {
            val = c - 'A' + 10;
        } else if (c &gt;= 'a' &amp;&amp; c &lt;= 'f') {
            val = c - 'a' + 10;
        }
        decimal += val * pow(16, i);
    }
    cout &lt;&lt; "Decimal: " &lt;&lt; decimal &lt;&lt; endl;
    return 0;
}