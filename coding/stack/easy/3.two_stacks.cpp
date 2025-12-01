#include <iostream>
using namespace std ;
class twostacks {
  int * arr ;
  int top1 , top2, size;
  public :
    twostacks(int n)
    {
      size=n;
      arr=new int[n];
      top1=-1
      top2=size ;
    }
    void push1(int x)
    {
      if(top1<top2-1)
      {
        arr[++top1]=x;
      }
    }
    //same for push2
    int pop1()
    {
      if(top1>=0)
      {
        int x=arr[top1--];
        return x ;
      }
    }
    int pop2() {
        if (top2 < size) {
            int x = arr[top2];
            top2++;
            return x;
        } else
            return -1;
    }
}