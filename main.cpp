#include <iostream>
#include "quetype.cpp"
#include "quetype.h"

using namespace std;

int main()
{
    QueType<int> myQueue(5);
    if(myQueue.IsEmpty()){
        cout<<"The queue is empty" <<endl;
    }
    else{
        cout<<"The queue isn't empty"<<endl;
    }
    int temp,i;
    cout<<"Insert 4 items: "<<endl;
    for(i=0;i<4;i++){
        cin>>temp;
        myQueue.Enqueue(temp);
    }
     if(myQueue.IsEmpty()){
        cout<<"The queue is empty" <<endl;
    }
    else{
        cout<<"The queue isn't empty"<<endl;
    }
     if(myQueue.IsFull()){
        cout<<"The queue is full" <<endl;
    }
    else{
        cout<<"The queue isn't full"<<endl;
    }
    myQueue.Enqueue(6);
    QueType<int> myQueue1(5);
    int x;
    cout<<"Printing the elements after insertion: "<<endl;
    while(!myQueue.IsEmpty()){
        myQueue.Dequeue(x);
        cout<<x<<" ";
        myQueue1.Enqueue(x);
    }
    cout<<endl;
    if(myQueue1.IsFull()){
        cout<<"The queue is full" <<endl;
    }
    else{
        cout<<"The queue isn't full"<<endl;
    }
    try{
    myQueue1.Enqueue(8);}
    catch(FullQueue e){
    cout<<"Queue overflow"<<endl;
    }

    for(i=0;i<2;i++){
    myQueue1.Dequeue(x);}

 cout<<"Printing the elements after we dequeue 2 elements: "<<endl;
    while(!myQueue1.IsEmpty()){
        myQueue1.Dequeue(x);
        cout<<x<<" ";
        myQueue.Enqueue(x);
    }
    cout<<endl;
    if(myQueue1.IsEmpty()){
        cout<<"The queue is empty" <<endl;
    }
    else{
        cout<<"The queue isn't empty"<<endl;
    }

    try{
    myQueue1.Dequeue(x);}
    catch(EmptyQueue e){
    cout<<"Queue underflow"<<endl;
    }


  cout<<"Enter the binary number "<<endl;
  int bin;
  cin>>bin;
   QueType<string> myQueue2 (bin);
     myQueue2.Enqueue("1");
  string str1;

for(i=0;i<bin;i++){

   try{ myQueue2.Dequeue(str1);
    cout<<str1<<" ";

    myQueue2.Enqueue(str1+"0");

    myQueue2.Enqueue(str1+"1");
   }
   catch(FullQueue e){

   }




}
}
