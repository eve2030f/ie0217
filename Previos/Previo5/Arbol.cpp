//PREVIO 5 B82870 EVELYN F.
//Arbol en C++

#include <iostream>
using namespace std;

struct Node{ //estructura
    int data;
    struct Node*left,*right; //dos punteros izq y derecha para ir x arbol
    Node(int data){
        this -> data = data;// este vlaor
        left= right= NULL; //por ahora no tiene hijos
    }
};

//Preorder Traversal primero raiz luego izq y derecho
void preorderTraversal(struct Node*node){
    if(node == NULL)
    return;


cout<< node->data<<"->";
preorderTraversal(node->left);
preorderTraversal(node-> right);
}


//Postorder traversal prim izq, derecha y luego raiz

void postorderTraversal(struct Node*node){
    if (node==NULL)
    return;
postorderTraversal(node->left); //recursividad, se devuelve para revisar los nodos antes de seguir
postorderTraversal(node-> right);
cout<< node->data<<"->";
}

//Inorder traversal //raiz izq der

void inorderTraversal(struct Node*node){
    if(node==NULL)
    return;

    inorderTraversal(node -> left);
    cout <<node ->data<< "->";
    inorderTraversal(node -> right);
}

int main(){
    struct Node*root= new Node(1);
    root -> left = new Node(12);
    root -> right = new Node(9);
    root -> left -> left = new Node(5);//agrega a izq orto nodo a la izq
    root -> left -> right = new Node(6);//agrega a izq orto nodo a la der

//12, 9, 5, 6 es lo q se esta almacenando
//imprime
    cout<<" Inorder Traversal ";
    inorderTraversal(root);
    cout<<"\n Preorder Traversal ";
    preorderTraversal(root);
    cout<<"\n  Postorder Traversal";
    postorderTraversal(root);
}
//RESULTADO