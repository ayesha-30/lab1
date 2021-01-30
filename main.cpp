#include <iostream>
#include "UnsortedList.h"
using namespace std;

int main() {

    UnsortedList list;

    list.InsertItem(1);
    list.InsertItem(2);
    list.InsertItem(0);
    list.InsertItem(5);
    list.InsertItem(0);
    list.InsertItem(5);
    list.InsertItem(1);
    list.InsertItem(5);
    list.InsertItem(4);
    list.InsertItem(1);
    list.InsertItem(5);
    list.InsertItem(4);
    list.InsertItem(3);

    cout << "List : ";
    int out = 0;
    while (list.GetNextItem(out)){
       cout << out <<" ";
    }

    if(list.DeleteItem(59)){
        cout<<endl<<"Item is deleted"<<endl;
        cout<<"Updated list : ";
        list.ResetList();
        while(list.GetNextItem(out)){
            cout << out <<" ";
        }
    }
    else{
     cout<<endl<<"Item not deleted";
    }

    for(int i=0;i<MAX_ITEMS;i++){
     cout << info[i] << "  ";

    }
    cout <<"List without duplicate value:";
    for(int i=0;i<Len;i++){

    cout << arr[i] << "  ";

}
    return 0;
}


