#include <iostream>
using namespace std;
int total()
{
   int numbers[10], n;
   int S=0;
   for(int i=0;i<n;i++){
       S+=numbers[i];
   }
   return S;
}
int main()
{
    int numbers[10];
    int n, S;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << S;

    return 0;
}
