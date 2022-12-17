#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

int giaithua(int n) {
    if (n == 0) return 1;
    return giaithua(n - 1) * n;
}

int vetamgiac(int k, int n) {
    if (k == 0 || k == n) 
        return 1;
    if (k == 1) return n;

     return vetamgiac(k, n - 1) + vetamgiac(k - 1, n - 1);
    }


int countNumber(string str) {

    int demso = 0;
    

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            ++demso;
            }
        } 
    return demso;
}

int countWord(string str) {
    int demchu = 0;
    
   for (int i = 0; i < str.size(); i++) {        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            ++demchu;
        }
    }
    return demchu;
} 


int main()
{
    char s[100];
   

    cout << "Nhap chuoi can dem: ";
    gets(s);

    cout << "So luong so trong chuoi: " << countNumber(s) << endl;
    cout << "So luong chu cai trong chuoi:" << countWord(s) << endl;

    
    system("pause");
}