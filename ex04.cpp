#include<iostream>
using namespace std;
int my_strlen(const char* s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    return l;
}
int main() {
    string s1 = "kochammatematyke";
    string s2 = "kochamnauke";
    string s3 = "uwielbiaminternat";
    cout << my_strlen(s1.c_str()) << endl;
    cout << my_strlen(s2.c_str()) << endl;
    cout << my_strlen(s3.c_str()) << endl;
    return 0;
}