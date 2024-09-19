#include<stdio.h>
#include<stdlib.h>
# define max 50
int front,rear = -1;
int qu[max];
void enqueue(int val){
    if(rear==max-1){
        printf("\n over flow...");
        return;
    }
    else if(front == -1 && rear == -1){
            front,rear=0;
            qu[rear]=val;
        }
    else{
            rear=rear+1;
            qu[rear]= val;

    }
    printf("enqueue is scuessfull....\n");
}
void dequeue(){
    if(front==-1 || front>rear/*rear==-1*/){
        printf("under flow....");
        return;
    }
    else if(front==0&&rear==0){

        printf("dequeue element %d ",qu[front]);

                front,rear=-1;

        }
    else{
        printf("more than one elements means.... for dequeue purposes........");
        front = front +1;
    }
    }
void show(){
    int i;
    printf("\n");
    printf("\nThe elements are .........\n");
    if(front==-1 && rear==-1){
        printf("under flow....");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("\n%d\n",qu[i]);
        }
    }
}
void revshow(){
        int i;
    printf("\nThe reversed elements are .........\n");
    if(front==-1 && rear==-1){
        printf("under flow....");
    }
    else{
        for(int i=rear;i>=front;i--){
            printf("\n%d\n",qu[i]);
        }
    }

}
void peek(){
if(front == -1 && rear == -1){
    printf("under flow ........\n");
}
else{
    printf("\nthe front end of queue is %d \n",qu[front]);
    printf("\nthe rear end of queue is %d \n",qu[rear]);
}

}
int main(){
    enqueue(67);
    enqueue(567);
    enqueue(576);
    enqueue(56);
    enqueue(76);
    enqueue(996);
    enqueue(99996);
    dequeue();
    show();
    revshow();
    peek();
}
