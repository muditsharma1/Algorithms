/*
BASIC GPA CALCULATOR
*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, a;
    float first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, total;
    double GPA;
    cout << "Enter Your Grade In First Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your First Subject:" << endl;
    cin >> y;
    first = x * y;
    cout << "Points For First Subject Will Be:" << first << endl;
    cout << "Enter Your Grade In Second Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Second Subject:" << endl;
    cin >> y;
    second = x * y;
    cout << "Points For Second Subject Will Be:" << second << endl;
    cout << "Enter Your Grade In Third Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Third Subject:" << endl;
    cin >> y;
    third = x * y;
    cout << "Points For Third Subject Will Be:" << third << endl;
    cout << "Enter Your Grade In Fourth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Fourth Subject:" << endl;
    cin >> y;
    fourth = x * y;
    cout << "Points For Fourth Subject Will Be:" << fourth << endl;
    cout << "Enter Your Grade In Fifth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Fifth Subject:" << endl;
    cin >> y;
    fifth = x * y;
    cout << "Points For Fifth Subject Will Be:" << fifth << endl;
    cout << "Enter Your Grade In Sixth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Sixth Subject:" << endl;
    cin >> y;
    sixth = x * y;
    cout << "Points For Sixth Subject Will Be:" << sixth << endl;
    cout << "Enter Your Grade In Seventh Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Seventh Subject:" << endl;
    cin >> y;
    seventh = x * y;
    cout << "Points For Seventh Subject Will Be:" << seventh << endl;
    cout << "Enter Your Grade In Eighth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Eighth Subject:" << endl;
    cin >> y;
    eighth = x * y;
    cout << "Points For Eighth Subject Will Be:" << eighth << endl;
    cout << "Enter Your Grade In Ninth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Ninth Subject:" << endl;
    cin >> y;
    ninth = x * y;
    cout << "Points For Ninth Subject Will Be:" << ninth << endl;
    cout << "Enter Your Grade In Tenth Subject(as a number):(USE A+=10,A=9,B=8,C=7,D=6,E=5,F=4)" << endl;
    cin >> x;
    cout << "Enter Credit Of Your Tenth Subject:" << endl;
    cin >> y;
    tenth = x * y;
    cout << "Points For Tenth Subject Will Be:" << tenth << endl;
    cout << "Enter Your Total Credits for The Semester:" << endl;
    cin >> a;
    total = first + second + third + fourth + fifth + sixth + seventh + eighth + ninth + tenth;
    GPA = total / a;
    cout << "Your GPA is :" << GPA << endl;
    return 0;
}