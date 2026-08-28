#include <iostream>
using namespace std;


void usa(){
    cout<<"you are in usa"<<endl;
}
void austrila()
{
    cout<<"you are in austrila"<<endl;
    usa();//calling usa function inside usa
}
int main() {
    usa();
    cout<<"you are in main"<<endl;
    austrila();//calling austrila inside usa
    return 0;
}