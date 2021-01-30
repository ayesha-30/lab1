    #ifndef UNSORTEDLIST_H
    #define UNSORTEDLIST_H

    const int MAX_ITEMS = 13;
    const int Len= 6;

    class UnsortedList{

    private:
        int length;
        int info[MAX_ITEMS];
        int arr[Len];
        int currentPos;

    public:
        UnsortedList();
        bool InsertItem(int);
        bool RetrieveItem(int&);
        bool DeleteItem(int);
        bool GetNextItem(int&);
        void ResetList();
        bool IsFull();
        int LengthIs();
        void MakeEmpty();

        int duplicate(int arr[]);


    };

    #include "UnsortedList.tpp"
    #endif // UNSORTEDLIST_H

