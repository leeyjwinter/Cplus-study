#include <iostream>


namespace a{

    int n;
}

namespace b {

    int n;
}



int main(){ 
    //namespace: 이름 성이 있으면 std는 성에 해당 성으로 구별되는 것임
    a::n = 10;
    b::n = 20;
    //2개의 n이 별개의 n임
    std::cout << "Hello World!" << std::endl;
}

