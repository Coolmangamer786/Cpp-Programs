#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;
int main() {
    string binary;
    cout &lt;&lt; "Enter a binary number: ";
    cin &gt;&gt; binary;
    int decimal = 0;
    int len = binary.length();
    for (int i = 0; i &lt; len; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    string hex = "";
    if (decimal == 0) hex = "0";
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