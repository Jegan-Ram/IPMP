#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size();
    cout<<endl<<a+b;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<endl<<a<<" "<<b;
  
    return 0;
}
