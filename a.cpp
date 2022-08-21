// #include<iostream>
// using namespace std;
// int main(){
//     int array[5];
//     for(int i=0;i<5;i++){
//         cin>>array[i];

//     }
//     cout<<"array is"<<endl;
//     for(int i=0;i<5;i++){
//         cout<<array[i]<<endl;
//     }
// }
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
int main()
{

    int size;
    cout << "enter the size of arry" << endl;
    cin >> size;

    int array[size];
    for (int i = 1; i <= size; i++)
    {
        cout << "enter " << i << " element ";
        cin >> array[i];
    }
    // for (int i = 1; i <= size; i++)
    // {
    //     cout << array[i] << endl;
    // }
    for (int s : array)
    {
        cout << s << endl;
    }
}