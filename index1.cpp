#include <iostream>
#include <string>
using namespace std;
int add(int a, int b) {
    return a + b;}
double add(double a, double b) {
    return a - b;}
string add (string a, string b) {
    return a + b;}
int add(int a, int b, int c) {
    return a + b + c;}
int main() {
    cout << "avelacnel andamner " << add(5, 5) <<endl;
    cout << "avelacnel racional " << add(2.5, 2.5) <<endl;
    cout << "avelacnel tox" << add(string("kom"),string("pot")) <<endl;
    cout << "avelacnel andmaner " << add(1, 2, 3) <<endl;
    return 0;
}