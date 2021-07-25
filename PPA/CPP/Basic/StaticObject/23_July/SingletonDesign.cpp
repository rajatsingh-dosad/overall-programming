
#include <iostream>

/*
class SingleTon {
    
    
    private:            
        SingleTon() {           //Constructor should be private in order to achieve singleton design i.e only one object creation
            std::cout << "In constructor" << std::endl;
        }

    public:
        static SingleTon getObject() {      //Wrote static method because it can be called directly using className instead of  creating objects
        
            static SingleTon obj;
            return obj;
        }
};

int main() {

    SingleTon obj1 = SingleTon::getObject();
    SingleTon obj2 = SingleTon::getObject();

    std::cout << &obj1 << " " << &obj2 << std::endl;    
    return 0;
}
*/

/*  
    OUTPUT:

    In constructor
    100 101             //Addresses are different because when we as 
                        //SingleTon obj1 = SingleTon::getObject() then here call to copy constructor is given so object brought by "SingleTon::getObject" is copied
                        //into 'obj1' so we get different addresses

*/








//To get the same addresses we can create object using pointer as below


class SingleTon {
    
    
    private:            
        SingleTon() {           
            std::cout << "In constructor" << std::endl;
        }

    public:
        static SingleTon* getObject() {     
        
            static SingleTon *obj = new SingleTon();
            return obj;
        }
};

int main() {

    SingleTon *obj1 = SingleTon::getObject();
    SingleTon *obj2 = SingleTon::getObject();

    std::cout << obj1 << " " << obj2 << std::endl;    
    return 0;
}

/*  
    OUTPUT:

    In constructor
    100 100            
*/