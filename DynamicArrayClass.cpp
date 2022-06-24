#include <iostream>
using namespace std;
class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity; // Total size
public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 6;
    }
    DynamicArray(DynamicArray const &d){
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;

    }
    void operator=(DynamicArray const &d){
          this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->nextIndex=d.nextIndex;
        this->capacity=d.capacity;
    }
    void add(int element){
        if(nextIndex==capacity){
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            delete[]data;
            data=newdata;
            capacity*=2;

        }
        data[nextIndex]=element;
        nextIndex++;


    }
    void addElement(int index,int element){
        if(index < nextIndex){
            data[index]=element;

        }
        else if(index==nextIndex){
            add(element);

        }
        else{
            return;

        }
       

    }
    int GetElement(int index){
         if(index<nextIndex){
            return data[index];
         }else{
            return -1;
         }

    }
    void print(){
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};

    int main()
    {
        DynamicArray d1;
        d1.add(10);
        d1.add(20);
        d1.add(30);
        d1.add(40);
        d1.add(50);
      
        DynamicArray d2(d1);
          d1.addElement(0,100);
        d1.print();
        d2.print();
        DynamicArray d3;
          d1.addElement(2,300);
        d3=d1;
        d3.print();
        d1.print();
    }