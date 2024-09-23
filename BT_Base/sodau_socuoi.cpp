
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap vao mot so: ";
    cin>>n;
    int c = n%10, i=1, m=n;
    while (n>=10)
    {
        n/=10;
        i*=10;
    }
    m =m-c-i*n;
    int somoi= c*i+m+n;
    cout<<"so moi sau khi da dao chu so dau va cuoi la: "<<somoi<<endl;

return 0;
}
