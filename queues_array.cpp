#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int front,end,current_size,n;	
public:
	Queue(int n=5){
		arr=new int[n];
		front=0;
		end=n-1;
		current_size=0;
	}
	void push(int d){
		if(current_size<n){
			end=(end+1)%n;
			arr[end]=d;
			current_size++;
		}
		else{
			cout<<"Queue is full"<<endl;
		}
		} 
	void pop(){
		if(current_size>0){
			front=(front+1)%n;
		    current_size--;
		}
		else{
			cout<<"oberflow"<<endl; 
	}
	}
	int froont(){
		return arr[front];
	}
	bool empty(){
		return current_size==0;
	}
	int size(){
		return current_size;
	}
};
int main(){
	// Queue q(size which need to be override);
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	while(!q.empty()){
		cout<<q.froont()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}