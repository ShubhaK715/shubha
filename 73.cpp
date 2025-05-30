#include<iostream>
#include<string>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int left=0,right= size-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}
void displaybook(int arr[], string titles[], int size)
{
    cout<<"\nAvailabel Books:\n";
    for(int i=0;i<size;i++)
    {
        cout<<"ID: "<<arr[i]<<"-"<<titles[i]<<endl;
    }
}
int main()
{
    const int size=7;
    int booksIDs[size]={1001, 1005, 1010, 1020, 1030, 1050, 1100};
    string bookTitles[size]={
        "C++ Basice" ,"Data Structure", "Algorithms", "Database Systems", "Operating System", "Computer networks", "AI fundametale"};
        displaybook(booksIDs, bookTitles, size);
        int searchID;
        cout<<"\nEnter the book ID to search: ";
        cin>>searchID;
        int index=binarysearch(booksIDs, size, searchID);
        if(index != -1)
        {
            cout<<"Book Found: "<<bookTitles[index]
                <<"(ID: "<<booksIDs[index]<<")"<<endl;
        }
        else{
            cout<<"Book with ID "<<searchID<<" not found."<<endl;
        }
        return 0;
}