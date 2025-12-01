#include <iostream>
#include <stack>
using namespace std ;



class myq {
  private :
    stack<int> st ;
  public :
    void enq(int x)
      st.push(x) ;
    void dq ()
    {
      //if s is empty , print underflow
      
      int x=s.pop() ;
      if(s.empty())
        return ;
      dq() ;
      st.push(x) ;
    }
    void front()
    {
      // check if its empty first 
      int x=s.top();
      s.pop() ;
      if( s.empty())
      {
        s.push(x) ;
        return x ;
      }
      int item=front();
      s.push(x);
      return item ; // the front element is being passed on 

    }
} ;