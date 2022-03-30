//53강
#include <iostream>

using namespace std;

int n;

void set() {
    ::n = 10; //a라는 namespace에 속했으면 a::n이라고 해야하나 전역변수이기 때문에 명시적으로
    //::n으로 표시
}

namespace doodle {
    int n;
    //선언만 해놓고 함수를 이후에 정의할 수도 있음
    void set();
}

namespace google {
    int n;
    void set();
}

namespace newgoogle {
    int n;
    void set() {
        ::n = 30;
    }
}

int main()
{
    ::set();
    doodle::set();
    google::set();

    cout << ::n << endl;
    cout << doodle::n << endl;
    cout << google::n << endl;
    cout << newgoogle::n << endl;
}

//특정한 네임스페이스 안에서 선언한 변수는 소속한 네임스페이스 안으로 한정됨


namespace doodle {
    void set() {
        doodle::n = 20;//n=20이라고 해도 같은 효과
    }
}

//아래와 같이 선언도 가능
void google::set() {
    n = 30;
}
