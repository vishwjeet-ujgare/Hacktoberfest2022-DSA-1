#include <bits/stdc++.h>
using namespace std;


class Stack{
    private:
     queue<int> p,q;
     
    public:
        void push(int x){
            q.push(x);
            while (!p.empty()) {
                q.push(p.front());
                p.pop();
            }

            swap(p,q);
        }

        void pop(){
            if (p.empty()) return;
            p.pop();
        }

        int top(){
            if (p.empty())  return -1;
            return p.front();
        }

        void display(){
            queue<int> pq=p;
            while(!pq.empty()){
              cout<<pq.front()<<endl;
              pq.pop();
            }
            cout<<endl;
        }
};


int main(){
	Stack s;
    //pushing element in stack
	s.push(9);
	s.push(13);
	s.push(4);

	cout<<"Top element of stack "<<s.top()<<endl;
    cout<<"Display element of stack"<<endl;
    s.display();
	cout<<"Top element of stack "<<endl;
    s.pop();
    cout<<"Display element of stack"<<endl;
    s.display();

	return 0;
}
