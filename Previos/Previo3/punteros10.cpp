//Previo3 B82870 Evelyn F.
#include <iostream>
using namespace std;
int main(){
    int var =2050;
    int*ptr_var;

    ptr_var=&var;

    cout<< "var: " << var<< ", ptr_var:" << ptr_var << endl;

    int** ptr_ptr_var; //direccion del puntero ptr_var
    ptr_ptr_var= &ptr_var;
    cout<< "ptr_ptr_var: " << ptr_ptr_var << endl; // imprime pointer del puntero
    cout<< "&ptr_var: " << ptr_ptr_var << endl; //imprime direccion de var
    cout<< "&ptr_ptr_var: " << &ptr_ptr_var << endl; // imprime direccion de pointer
     return 0;

}
//var: 2050, ptr_var:0x7ffdacf30354
//ptr_ptr_var: 0x7ffdacf30358
//&ptr_var: 0x7ffdacf30358
//&ptr_ptr_var: 0x7ffdacf30360
