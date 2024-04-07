//PREVIO 5 B82870 EVELYN F.
//Queue en C++
#include<iostream>
#define SIZE 5
using namespace std;

class Queue{
    private:
    int items [SIZE], front, rear;

    public:
    Queue(){
        front= -1; //punteros ambos en /1
        rear= -1;
    }
    bool isFull(){
        if (front ==0 &&rear == SIZE -1){ // lleno llega rear a puntero 5-1 =4
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(front== -1) //vacio
            return true;
        else
            return false;
    }
    void enQueue(int element){
        if(isFull()){
            cout<<"Queue is full";  
        } else{
            if (front== -1) front = 0;
            rear++;
            items[rear] = element; //coloca elemento rear despues de aumentarlo
            cout<<"Inserted " <<element<<endl; //impresion
        }
    }
    int deQueue(){
        int element;
        if (isEmpty()){
            cout<<"Queue is empty"<<endl;
            return(-1);
        }else{
            element= items[front];
        if (front >= rear){ //si no vacio saca elemento de la cola
            front= -1; //cada vez actualiza punteros
            rear= -1;
        } //en este caso, el queue solo tiene un elemento, entonces se borra y se reinicia.
        else{
            front++;
        }
        cout<<"Deleted" << element<<endl; //elemento a desencolar
        return(element);
        }
        
    }
    void Display(){
        //Funcion para mostrar los elementos del Queue
        int i;
        if (isEmpty()){
            cout<<"Empty Queue"<<endl;
        }else{
            cout<<"Frontal index -> "<< front; // imprime desde la parte frontal
            cout<< endl
            <<"Items -> ";
            for (i=front; i<= rear; i++)
                cout<<items[i]<< " ";
                cout<<endl
                << "Rear index-> "<<rear<<endl;// hasta elementos en la parte trasera
        }
    }
};

int main(){
    Queue q;

    //deQueue no es posible si esta vacio
    q.deQueue();

    //5 elementos de enQueue
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    //el sexto elemento no se puede meter porque el queue esta lleno
    q.enQueue(6);

    q.Display();
    //Quita el primer elemento 1
    q.deQueue();

    //Ahora solo hay 4 elementos
    q.Display();

    return 0;
}
//RESULTADO