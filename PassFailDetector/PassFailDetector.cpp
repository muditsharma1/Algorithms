/*
This pass fail detector is based o the marking scheme of jecrc university 
*/
#include <iostream>
using namespace std;
int main()
{
    float m1, m2, m3, m4, m5;
    float a;
    cout << "Enter Your Ist In Term Marks:" << endl;
    cin >> m1;
    m1 = m1 * 0.3;
    cout << "Enter Your IInd In Term Marks:" << endl;
    cin >> m2;
    m2 = m2 * 0.3;
    cout << "Enter Your Assignment Marks:" << endl;
    cin >> m3;
    cout << "Enter Your Attendence Marks:" << endl;
    cin >> m4;
    cout << "Enter Your Final Term Marks:" << endl;
    cin >> m5;
    a = m1 + m2 + m3 + m4;
    if (a < 35)
    {
        cout << "You Are FAILED You Need " << 35 - a << " Marks In Internals And Need " << (35 - a) << " In Your Final Term To Pass The Examination"<<endl;
    }
    if (m5 < 35)
    {
        cout << "You Are FAILED You Need " << 35 - m5 << " Marks In Your Final Term"<<endl;
    }
    m5 = m5 * 0.5;
    if (a > 35 && m5 > 35)
    {
        cout << "You Are PASSED";
    }

    return 0;
}