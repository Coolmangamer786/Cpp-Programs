#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;
int main() {
    int decimal;
    cout &lt;&lt; "Enter a decimal number: ";
    cin &gt;&gt; decimal;
    string hex = "";
    while (decimal &gt; 0) {
        int rem = decimal % 16;
        if (rem &lt; 10) {
            hex = char(rem + '0') + hex;
        } else {
            hex = char(rem - 10 + 'A') + hex;
        }
        decimal /= 16;
    }
    cout &lt;&lt; "Hexadecimal: " &lt;&lt; hex &lt;&lt; endl;
    return 0;
}