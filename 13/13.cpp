#include <iostream>
using namespace std;
int main()
{
    int scores[5][5] = {
    { 11, 12, 13, 14, 15 },
    { 21, 22, 23, 24, 25 },
    { 31, 32, 33, 34, 35 },
    { 41, 42, 43, 44, 45 },
    {51, 52, 53, 54, 55} };
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cout<< scores[i][i]<<" ";
    }
    cout << "!!!!";
    cout << "Ярослав крутой";
    system("pause>>void");
    return 0;
}
