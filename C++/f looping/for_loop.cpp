#include <iostream>
using namespace std;

int main(){
    cout<<"for loop \n"<<endl;
    //for loop
    for (int i= 0; i <= 10; i++){
        cout << "bilangan i = " << i << endl;
    }
    cout<<"\n break \n"<<endl;
    // break 
    for (int i= 0; i <= 10; i++){
        if (i == 6){
            break;
        }
        cout << "bilangan i = " << i << endl;
    }
    cout<<"\n continue \n";
    // continue
    for(int i= 0; i <= 10; i++){
        if (i == 6){
            continue;
        }
        cout << "bilangan i = " << i << endl;
    }
    cin.get();
    return 0;
}