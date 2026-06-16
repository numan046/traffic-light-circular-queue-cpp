#include <iostream>
#include <unistd.h>
using namespace std;
void enQueue(string color);
void deQueue();
void print(int time);
int s=3;
string a[3];
int front=-1;
int rear=-1;
int main(){
	int timeinterval=120;
    enQueue("Red");
    enQueue("Yellow");
    enQueue("Green");
    while(true){
        print(timeinterval); 
        deQueue();
        enQueue("Red");
        deQueue();
        enQueue("Yellow");
        deQueue();
        enQueue("Green");
    }
    return 0;
}
void enQueue(string light) {
        if((front==0 && rear==s-1) || front==rear+1) {
            cout<<"Circular Queue is full."<<endl;
            return;
        }
		else if(front==-1 && rear==-1){
            front=0;
            rear=0;
        } 
		else{
            rear=(rear + 1)%s;
        }
        a[rear]=light;
}
void deQueue(){
        if(front==-1 && rear==-1){
            cout<< "Circular Queue is empty."<<endl;
            return;
        } 
		else if(front==rear){
            front=-1;
            rear=-1;
        } 
		else{
            front=(front+1)%s;
        }
}
void print(int time){
        if(front==-1 && rear==-1){
            cout<<"Circular Queue is empty."<<endl;
            return;
        }
        int i=front;
           do{
        cout<<a[i]<<endl;
        i=(i+1)%s;
        sleep(time);
    }while(i!=(rear+1)%s);
}
