

// Basic of friend function

// Friend function is not a part of the class hence it doesn't require object to call it.
// Friend function can be declared in public as well as private part of a class without affecting its meaning.
// 

#include <iostream>

class FriendAccess {

    private: 
        int mobAccess;

    public:
        FriendAccess(int myAccess) {

            mobAccess = myAccess;
        }

        void myAccess();    // Normal function

        friend void friendAccess(FriendAccess &obj);    // friend function
};

void FriendAccess::myAccess() {         // member function hence needs scope resolution operator to define

    std::cout << mobAccess << std::endl;
}

void friendAccess(FriendAccess &obj) {     // friend function hence doesn't need scope resolution operator to define 

    obj.mobAccess += 3;
    std::cout << obj.mobAccess << std::endl;
}

int main() {

    FriendAccess obj(5);
    obj.myAccess();

    friendAccess(obj);
    return 0;
}