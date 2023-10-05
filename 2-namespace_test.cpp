#include <cstdio>

namespace n1{
    void func1(){std::printf("Hello1");}

    namespace n2{
        void func1(){std::printf("Hello2");}
    }
}

int main(){
    n1::n2::func1();
    return 0;
}