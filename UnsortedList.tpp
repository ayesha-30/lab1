#include "UnsortedList.h"

UnsortedList::UnsortedList(){
length = 0;
currentPos = -1;
    }

int i;

for (i = 0; i < length; i++) {

arr[i]= NULL;

       }

bool UnsortedList::InsertItem(int item) {
if (IsFull()) {
return false;
        }
info[length] = item;
length++;


for (i = 0; i < length; i++) {
if (arr[i] != item){
arr[i] = item;
            }
            }
            }
bool UnsortedList::RetrieveItem(int& item){
int location = 0;
while(location<length){
if(info[location] == item){
item = info[location];
return true;
            }
location++;
        }
return false;
    }
bool UnsortedList::DeleteItem(int item){
int location = 0;
while(location<length){
if(info[location] == item){
break;
            }
location++;
        }
if (location == length){
return false;
        }

info[location] = info[length-1];
length--;
return true;
    }
bool UnsortedList::GetNextItem(int& item){
currentPos++;
if(currentPos >= length){
return false;
        }
item = info[currentPos];
return true;
    }
void UnsortedList::ResetList(){
currentPos = -1;
    }
bool UnsortedList::IsFull(){
if (length == MAX_ITEMS){
return true;
        }
return false;
    }
int UnsortedList::LengthIs(){
return length;
    }
void UnsortedList::MakeEmpty(){
length = 0;

    }

