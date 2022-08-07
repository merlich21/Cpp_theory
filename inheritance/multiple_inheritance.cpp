class base1 {
    public:
        void someFunction( ) {}  
};
class base2 {
    public:
         void someFunction( ) {} 
};
class derived : public base1, public base2 {};

// int main() {
//     derived obj;
//     obj.someFunction() // Error!  
// }


int main() {
    derived obj;

    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}
