# Cplus-study

## 🔑Object-Oriented Programming

>•객체 지향 프로그래밍(OOP)은 데이터 필드(개체를 설명하는 속성)와 관련 프로시저를 가진 "개체"의 개념을 나타내는 프로그래밍 패러다임이다. 일반적으로 클래스의 인스턴스인 개체는 응용 프로그램 및 컴퓨터 프로그램을 설계하기 위해 서로 상호 작용하기 위해 사용된다.
• C++, Objective-C, Smalltalk, Delphi, Java, Javascript, C#, Perl, Python, Ruby 및 PHP는 객체 지향 프로그래밍 언어의 예이다.

## 🔑OOP의 3가지 특성
1. Encapsulation (캡슐화)
2. Polymorphism (다형성)
3. Inheritance (상속성)

### 1. 캡슐화
>데이터와 기능을 하나의 컴포넌트로 패킹하여 데이터와 기능을 선택적으로 숨길 수 있음

클래스의 private, public으로 메서드나 변수의 접근을 제어하는 개념

### 2. 다형성
>서로 다른 유형의 엔티티에 대한 단일 인터페이스 제공하며 다형성을 함수와 연산자 모두에 적용할 수 있다.

함수, 연산자를 오버로딩 하는 개념!

### 3. 상속성
>•상속을 통해 프로그래머는 다른 클래스의 관점에서 클래스를 정의할 수 있으므로 응용 프로그램을 쉽게 만들고 유지할 수 있다.
• 상속을 통해 코드 기능을 재사용하고 구현 시간을 단축할 수 있다.

![](https://images.velog.io/images/leeyjwinter/post/94b3ccf7-03a7-480a-b6e0-4f2027a56f0c/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

## 🔑표준입출력 cout, cin 

### cout 
"<<" 삽입 연산자를 통해 c 언어의 printf문을 대체하여 사용
삽입 연산자를 여러번 사용하여 문자열과 숫자를 연결지어 출력하는 것도 가능

endl을 사용하여 linebreak, 다음줄로 넘어가도록 할 수 있음
  ```cpp
#include <iostream>

using namespace std;

int main() {
	cout << "First Sentence" << endl;
    cout << "Second Sentence. \nThird sentence." << endl;
}

```
>결과:
First Sentence.
Second Sentence.
Third sentence.

참고로 endl의 경우 flush() 함수를 겸하기 때문에 실행마다 출력 버퍼를 지워주는 과정(flush)이 생겨 "\n" 보다 속도가 느리므로 "\n"을 사용하는 편을 습관화하는 것이 좋을 듯 하다.

### cin

">>" 추출 연산자를 통해 선언된 변수의 입력을 받을 수 있다
역시 여러 연산자를 연결해서 사용도 가능하며 공백이나 개행으로 값을 받는다.

```cpp
#include <iostream>

using namespace std;

int main() {
	int i;
	char c;
	cin >> i >> c; 
}
```
>결과:
입력: i a
출력: ia

### 입출력 Quiz

![](https://images.velog.io/images/leeyjwinter/post/3b7f184a-2687-4345-bd5e-1a9111a74be9/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

```cpp
#include <iostream>

using namespace std;

int main() {
	cout << "Enter age, grade, and name:" << endl;
	int age;
	float grade;
	char name[10];
	
	cin >> age >> grade >> name;
	cout << "Age= " << age << ", Grade= " << grade << ", Name = " << name << endl;

}
```
## 🔑변수

>▪ 변수의 생명 주기(또는 범위) =변수가 생성되고 소멸될 때까지의 시간 
• 변수의 사용 가능한 범위 = 블록에 정의된 변수는 블록 내에서만 액세스

### ex) Scope of Variables

```cpp
#include <iostream>

using namespace std;

int main() {
	int var = 1;
	{
		char var = 'a';
		{
			cout << "var = " << var << '\n';
		}
		cout << "var = " << var << '\n';
	}
	cout << "var = " << var << '\n';
}
```

>결과:
var = a
var = a
var = 1

가장 안쪽의 var은 블록 내에 변수선언이 없으므로 바로 바깥쪽의 변수 가져옴,
 나머지는 블록의 변수 선언을 참조하여 출력함
 
 ### 지역변수, 전역변수
 


|선언 위치|local, global |
| -| -|
| <center>**저장 위치**</center> |<center>**auto, static, register**</center> |

## 🔑구조체

>•변수 하나의 이름 밑의 블록에 변수 목록을 선언하는 복잡한 데이터 형식 선언이다.
• 몇몇 변수는 포인터 혹은 변수명을 통해 액세스 할 수 있다.

```cpp
#include <iostream>

using namespace std;

struct Student {
	int id;
	float grade;
	int gender;
};

int main() {
	struct Student st;
	cout << "학번을 입력하세요\t";
	cin >> st.id;

	cout << "성적을 입력하세요\t";
	cin >> st.grade;

	cout << "성별을 입력하세요(남자:1, 여자:2)\t";
	cin >> st.gender;

	cout << "\n\n";
	cout << "입력하신 학생의\n";
	cout << "학번은 " << st.id << "\n" ;

	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "성적은" << (float)st.grade << "\n";
	cout << "성별은" << (st.gender == 1 ? "남자" : "여자") << "\n";
	cout << "입니다\n";

}
```

>결과:
학번을 입력하세요       2017312365
성적을 입력하세요       4.5
성별을 입력하세요(남자:1, 여자:2)       1<br>
>입력하신 학생의
학번은 2017312365
성적은4.5
성별은남자
입니다

cout.setf(ios::showpoint): 소숫점 표시(.), 생략된 0 들을 모두 출력 (기본 6자리)
cout.precision(2): 2자리 까지 표시 ex)45.5 넣으면 46. 과 같이 표시


### 구조체 Quiz

<center><img src = "https://images.velog.io/images/leeyjwinter/post/cd32bd71-5428-48d2-b9c1-05a960be9d12/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png" width = 60%></center>

```cpp
#include <iostream>

using namespace std;

struct Drink {
	int Sprite = 10;
	int Coke = 10;
};

struct Food {
	int Rice = 10;
	int Pizza = 10;
};

int main() {
	Drink drk;
	Food fd;

	while (1) {
		int answer = -1;
		cout << "Order (0: Drink, 1: Food, 2: Quit) : ";
		cin >> answer;

		if (answer == 0) {
			int drinkAnswer = -1;
			cout << "Drink(0: Coke, 1 : Sprite) : ";
			cin >> drinkAnswer;
			if (drinkAnswer == 0) {
				drk.Coke--;
			}
			else
				drk.Sprite--;
		}

		else if (answer == 1) {
			int foodAnswer = -1;
			cout << "Food(0: Rice, 1 : Pizza) : ";
			cin >> foodAnswer;
			if (foodAnswer == 0) {
				fd.Rice--;
			}
			else
				fd.Pizza--;
		}

		else if(answer ==2){
			break;
		}

		cout << "Remaining: Coke = " << drk.Coke << ", Sprite = " 
        << drk.Sprite << ", RIce = " << fd.Rice << ",Pizza = " << fd.Pizza << "\n";

	}
}
```

## 🔑Namespace

>• 네임스페이스는 변수 및 함수와 같은 식별자 집합을 위한 컨테이너, 구조체도 넣을 수 있음.
• 네임스페이스를 통해 동일한 이름의 식별자를 구분할 수 있다.
• 특정 네임스페이스의 변수 및 함수는 '::' 연산자를 사용하여 액세스할 수 있다.
	혹은 using namespace std와 같이 네임스페이스 선언을 해줘야 함
    
    
 ![](https://images.velog.io/images/leeyjwinter/post/bf8b1619-2527-47b4-9f52-9023de24f1db/image.png)
 
 ```cpp
 #include <iostream>
using namespace std;

namespace AA{ 
	char test = 'A';
	void func(char c) {
		cout << "Inside AA, Input: " << c << endl;
	} 
} 

namespace BB {
	char test = 'B';
	void func(char c) {
		cout << "Inside BB, Input: " << c << endl;
	}
} void main() { 
	AA::func(AA::test);
	AA::func(BB::test);
	BB::func(AA::test);
	BB::func(BB::test);
}
```
세상에는 많은 영준이가 있으나 이씨 가문의 영준이를 불러오고 싶을 때 네임스페이스를 사용하는 걸로 생각하면 됨(같은 이름의 함수명, 변수명을 네임스페이스에 따라 다르게 정의가 가능)

## 🔑묵시적 형변환, 명시적 형변환
> 
묵시적 형변환:
•컴파일러에 의한 자동 형 변환
• 혼합형 표현식에서는 프로그램이 올바르게 실행되도록 실행 시 필요에 따라 하나 이상의 서브타입 데이터를 슈퍼타입으로 변환할 수 있다.<br>
명시적 형변환
•프로그램 내에서 명시해주는 형변환
•여러가지 방식의 명시적 형변환이 있음

![](https://images.velog.io/images/leeyjwinter/post/c1a54c1e-bf76-4845-98a0-1d306f96b421/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

>결과 :
Weight percent = 0
Real Weight percent = 75


## 🔑함수

>• 함수는 작업을 수행한 후 제어권을 호출자에게 반환하는 코드 블록입니다.
• C 및 C++ 프로그래밍에서는 모든 실행 가능한 코드가 함수 내에 존재합니다.
• 함수는 종종 프로그램을 한 번 실행하는 동안 여러 곳에서 여러 번 실행(호출)됩니다.
• 서브루틴을 종료하면 프로그램은 콜 후 포인트로 분기(복귀)합니다.
• 함수의 연산은 매개 변수를 사용하여 변경할 수 있습니다.
• 함수 선언의 인수는 함수 호출로 전달된 매개변수에 명확하게 대응합니다.
• 함수에 리턴 타입이 있는 경우 콜은 반환값을 가진 것으로 평가되어 변수로 저장 가능.

![](https://images.velog.io/images/leeyjwinter/post/27af8616-4168-4469-b700-24f1e8b74e2d/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

```cpp
#include <iostream>
using namespace std;

float calculateCircle(int radius) {
	return 3.14 * radius * radius;
}

int main() {
	int min, max, radius;
	cout << "Enter Min (1~10) : " ;
	cin >> min;
	cout << "Enter Max (Min~10) : " ;
	cin >> max;

	for (int i = min; i < max + 1; i++) {
		cout << "Radius " << i << "=3.14x" << i << "x" << i << "=" << calculateCircle(i) << "\n";
	}

		
}
```

>결과:
Enter Min (1~10) : 2
Enter Max (Min~10) : 10
Radius 2=3.14x2x2=12.56
Radius 3=3.14x3x3=28.26
Radius 4=3.14x4x4=50.24
Radius 5=3.14x5x5=78.5
Radius 6=3.14x6x6=113.04
Radius 7=3.14x7x7=153.86
Radius 8=3.14x8x8=200.96
Radius 9=3.14x9x9=254.34
Radius 10=3.14x10x10=314

## Inline Function

>• 인라인 함수가 'inline' 키워드를 사용하여 정의되면 함수가 호출될 때마다 컴파일러는 함수 호출을 함수의 실제 코드로 바꿉니다.
• 인라인 함수는 function-calling-overhead가 저장되기 때문에 일반 함수보다 조금 빠르게 실행되지만 메모리 패널티가 발생합니다.
– 인라인 함수를 10회 호출하면 함수의 복사본이 코드에 10개 삽입됩니다.
• 인라인 함수는 자주 호출되는 작은 함수에 적합합니다.

변수로 따로 선언하지 않고 바로 함수의 반환값을 사용할 수 있는 함수로 보인다. 
```cpp
#include <iostream>

using namespace std;

inline int inc(int x) {
	return x + 1;
}
int main() {
	cout << inc(1) << endl;
}
```

## Recursive Functions 재귀 함수
>재귀 함수는 자신을 호출하거나 함수 호출의 잠재적 사이클에 있는 함수입니다.

### factorial

```cpp
#include <iostream>

using namespace std;

int Factorial(int n) {
	if (n == 1)
		return 1;
	return Factorial(n - 1) * n;
}

int main() {
	int result = Factorial(4);
	cout << "Factorial :" << result << "\n";

	return 0;
}
```

### fibonacci

```cpp
#include <iostream>

using namespace std;

int Fibo(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return Fibo(n - 1) + Fibo(n-2);
}

int main() {
	int result = Fibo(8);
	cout << "Fibo :" << result << "\n";

	return 0;
}
```

## 🔑클래스

>• 클래스는 데이터 및 함수(메서드라고도 함)를 멤버로 하는 키워드 클래스를 사용하여 선언된 사용자 정의 유형 또는 데이터 구조입니다.
• 클래스는 데이터 구조의 확장된 개념입니다. 데이터 구조처럼 데이터 구성원을 포함할 수 있지만 구성원으로서의 기능도 포함할 수 있습니다.

### 인스턴스(객체)

>• 인스턴스는 클래스의 구체적인 선언입니다.
• 정식 "instance"는 "object"와 동의어입니다.
• 인스턴스마다 독자적인 데이터가 있습니다.
• 생성된 인스턴스의 생성을 인스턴스화라고 합니다.

### 접근 지정자(private, public, protected)
| 지정자 | 접근성 | 
| :: |: - :| 
|**private**| Accessible only within the same class (not from outside the class)<br> 따로 private:으로 쓰지 않아줘도 기본적으로 클래스 내의 변수들은 private으로 저장되는 듯 함|
|**public** | Accessible within the class as well as from outside the class. | 
|**protected** | The members declared as "protected" cannot be accessed from outside the class, but can be accessed from a derived class. <br>This is used when inheritance is applied to the members of a class. <br>클래스 외부에서 액세스할 수 없지만 파생 클래스에서 액세스할 수 있습니다. 이는 상속이 클래스 멤버에 적용될 때 사용됩니다.| 

### 선언과 정의
>클래스의 경우 선언을 클래스 내에서, 그 메서드의 정의를 클래스 밖에서 할 수 있다

ex) Calculate Area 메서드를 클래스 밖에서 정의했다.
```cpp
#include <iostream>
using namespace std;

class Quadrangle {
private:
	int width;
	int height;
	int area;

public:
	int CalculateArea(int argWidth, int argHeight);
	void SetWidth(int width){
		Quadrangle::width = width;
	}
	void SetHeight(int height) {
		Quadrangle::height = height;
	}

};

int Quadrangle::CalculateArea(int argWidth, int argHeight) {
	width = argWidth;
	height = argHeight;
	area = width * height;
	return area;
}

void main() {
	int w, h;
	Quadrangle cQ;

	cout << "Enter Width : ";
	cin >> w;
	cout << "Enter Height : ";
	cin >> h;

	cQ.SetHeight(h);
	cQ.SetWidth(w);
	cout << "Area (w = " << w << ", h=" << h << ") =" << cQ.CalculateArea(h, w);

}
```

#### 클래스 선언 퀴즈


![](https://images.velog.io/images/leeyjwinter/post/6dc23755-d624-40be-a88e-d97adfab5609/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

```cpp
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Circle {
private:
	int radius;

public:
	void SetRadius(int radius_) {
		radius = radius_;
	}

	float CalculateArea() {
		return radius * radius * 3.14;
	}
};



int main() {
	int radius = 0;
	Circle circle;

	printf("Input radius: (cm)\n");
	scanf_s("%d", &radius);

	circle.SetRadius(radius);
	printf("Area (radius=%d) = %0.3f\n", radius, circle.CalculateArea());
}
```

>결과:
Input radius: (cm)
3
Area (radius=3) = 28.260

### 생성자와 소멸자 (Constructor and Destructor)

>생성자
• 클래스의 인스턴스가 생성될 때마다 생성자가 호출됩니다.
• 생성자의 이름은 클래스와 같으며 형식을 반환하지 않습니다.
• 클래스에 생성자가 없어도 컴파일러는 암묵적인 디폴트 생성자라고 불리는 생성자에 대한 코드를 생성합니다.

>소멸자
• 클래스의 객체가 소멸될 때마다 소멸자가 호출됩니다.
• 소멸자의 이름은 같은 방식으로 정의되지만 앞에 '~'가 있습니다.
• 클래스에 소멸자가 없어도 컴파일러는 디폴트 소멸자라고 불리는 소멸자에 대한 코드를 생성합니다.


```cpp
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class Unit {
	int status;
public:
	Unit(int a);
	~Unit();
	void fly();
};

Unit::Unit(int a) : status(a) {};
Unit::~Unit() {
	cout << "Unit Destructing";
	status = 0;
}

void Unit::fly() {
	cout << status << endl;
}

int main() {
	Unit oUnit(1);
	oUnit.fly();
	return 0;
}
```

 ---
 참고로 위의 생성자나 소멸자의 정의에서`
 ```cpp
Unit::Unit(int a) {
	status = a;
}
```
와 같은 소멸자 정의를
```cpp
 Unit::Unit(int a) : status(a) {};
 ```
와 같은 형태로 바꿀 수 있음
 
 #### 생성자 소멸자 퀴즈
 ![](https://images.velog.io/images/leeyjwinter/post/664de394-23d2-4ac0-92cd-b0efc56f082c/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)
 
 ```cpp
 #include <iostream>

using namespace std;

class Student {
	int Year;
	int ID;
	int Grade;

public:
	Student(int Year, int iD, int grade) : Year(Year), ID(iD), Grade(grade) {}
	void showData() {
		cout << "Year : " << Year << ", ID: " << ID << ", Grade : " << Grade;
	}
};

int main() {
	Student s(2017, 100100, 1);
	s.showData();
}
```

>결과:Year : 2017, ID: 100100, Grade : 1

### 상속

>• 상속을 통해 다른 클래스의 관점에서 클래스를 정의할 수 있으므로 응용 프로그램을 쉽게 만들고 유지할 수 있습니다.
• 코드 재사용 및 원래 소프트웨어의 독립적 확장을 허용하는 메커니즘입니다.
![](https://images.velog.io/images/leeyjwinter/post/135cb0b1-687e-4351-ac38-a44d821a120f/image.png)

```cpp
#include <iostream>
using namespace std;

class NPC {
	int defense;

public:
	void SetDefense(int n);
	int GetDefense();
};

class Grunt : public NPC {
	int armor;

public:
	void SetArmor(int n);
	int GetArmoredDefense();
};

void NPC::SetDefense(int n) {
	defense = n;
}

int NPC::GetDefense() {
	return defense;
}

void Grunt::SetArmor(int n) {

	armor = n;
}

int Grunt::GetArmoredDefense() {
	return armor + GetDefense();
}

int main() {
	Grunt oUnit;
	oUnit.SetDefense(10);
	oUnit.SetArmor(20);

	cout << "Get Armored Defense : " << oUnit.GetArmoredDefense() << "\n";
	return 0;
}
```
<img src = "https://images.velog.io/images/leeyjwinter/post/66a50d2d-1a6b-4a1a-8243-c908beeb0493/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png" width="600">
Grunt 클래스에서 NPC 클래스의 public 요소들을 가져와 사용하여 메서드를 통해 defense값을 줄 수 있다.

#### 상속 퀴즈

![](https://images.velog.io/images/leeyjwinter/post/8fd3fdde-60fe-42d7-bc99-3df39a0bc56b/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

```cpp
#include <iostream>

using namespace std;
class P {
public:
	int x=10;
protected:
	int y=10;
private:
	int z=10;
};

class A : public P {

};

class B : protected P{

};

class C : private P{

};

int main() {
	A a;
	B b;
	C c;
	cout << a.x << endl;
	cout << a.y << endl;
	cout << a.z << endl;
	cout << b.x << endl;
	cout << b.y << endl;
	cout << b.z << endl;
	cout << c.x << endl;
	cout << c.y << endl;
	cout << c.z << endl;
	
}
```
>**결과:**
a.x출력을 제외하면 모두 오류가 발생

>**이유**
public으로 P를 상속 받은 a는 접근제한자가 public 이상인 x를 public변수로 그대로 받아오고, 나머지 접근 제한자는 그대로 받아짐
b는 protected보다 접근 제한 범위가 큰 x를 protected로 받아오기 때문에 모든 변수가 public이 아니므로 접근 불가
c 역시 private보다 넓은 범위인 요소들을 모두 private으로 바꿔서 상속받음

### 다중 상속

>클래스는 여러 부모 클래스에서 변수 및 메서드를 상속할 수 있습니다. 클래스가 특정 클래스에서 상속될 수 있는 단일 상속과는 다릅니다.
![](https://images.velog.io/images/leeyjwinter/post/af83aa80-5875-412b-adfc-4346b7624694/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png)

#### 다중 상속 퀴즈
<img src = "https://images.velog.io/images/leeyjwinter/post/58c8065e-17d9-45ff-bcf3-c71a322df8a4/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png" width="48%" >

<img src = "https://images.velog.io/images/leeyjwinter/post/3f13beb7-9497-41a7-ad7d-5ec874b9adcc/%ED%99%94%EB%A9%B4%20%EC%BA%A1%EC%B2%98%202022-03-21%20170226.png" width="48%">

```cpp
#include <iostream>
//re: 실수
//im: 허수

using namespace std;

class Plus {
public:
	void printPlus(int re1, int im1, int re2, int im2) {
		cout << "Plus: " << re1 + re2 << "+" << im1 + im2 << "j" << endl;
	};
};

class Minus {
public:
	void printMinus(int re1, int im1, int re2, int im2) {
		cout << "Minus: " << -re1 + re2 << "+" << -im1 + im2 << "j" << endl;
	};
};

class Complex : public Plus, public Minus {
private:
	int re;
	int im;

public:
	Complex() : re(0), im(0) {};

	void setCom(int are, int aim) {
		re = 0;
		im = 0;
		re += are;
		im += aim;
	}

	void plus(int are, int aim) {
		printPlus(are, aim, re, im);
	}

	void minus(int are, int aim) {
		printMinus(are, aim, re, im);
	}
};
void main() {
	Complex a;

	a.plus(2, 3);
	a.minus(2, 3);

	a.setCom(1, 1);
	a.plus(2, 3);
	a.minus(2, 3);
}
```
### 클래스 포인터
>• 클래스에 대한 포인터는 구조체에 대한 포인터와 정확히 동일한 방식으로 작동됩니다.
• 멤버 액세스 연산자 '->'를 사용할 수 있습니다

ex)
```cpp
Grunt *pUnit = new Grunt;

pUnit -> SetDefence(10);
pUnit -> SetArmor(20);

delete pUnit;
```

or 

```cpp
Grunt oUnit;
Grunt *pUnit;
pUnit = &oUnit;
pUnit->SetDefense(10);
pUnit->SetArmor(20);

```

#### 클래스 포인터 퀴즈
<img src = "https://images.velog.io/images/leeyjwinter/post/0a7cf247-b0b7-4a1a-a942-07048cf13710/image.png" width="48%">

```cpp
void main() {
	Complex *a = new Complex;

	a->plus(2, 3);
	a->minus(2, 3);

	a->setCom(1, 1);
	a->plus(2, 3);
	a->minus(2, 3);
	
	delete a;
}
```
### 생성자 상속
>• 생성자는 상속되지 않습니다.
• 상위 클래스의 생성자는 하위 생성자가 암시적으로 또는 명시적으로 호출해야 합니다.
• 상위 클래스의 생성자가 먼저 호출되고 하위 클래스의 생성자가 나중에 호출됩니다.

상속받은 자식 클래스를 호출하면 부모 클래스의 생성자를 먼저 호출하고 자신의 생성자를 호출한다.
    <span style="color:red" >Derived::Derived(int a) : Base(a)</span>에서 명시적으로 생성자를 불러줘 부모클래스의 매개변수가 있는 생성자를 호출할 수 있다.

```cpp
#include <iostream>
using namespace std;

class Base {
public:
	Base();
	Base(int a);
	~Base();
};

Base::Base() {
	cout << " Constructor of Base " << endl;
} 

Base::Base(int a) {
	cout << "Constructor of Base " << a << endl;
}

Base::~Base() {
	cout << " Destructor of Base " << endl;
} 

class Derived : public Base {
public: 
	Derived();
	Derived(int a);
	~Derived();
};

Derived::Derived() {
	cout << " Constructor of Derived " << endl;
}

Derived::Derived(int a){
	cout << " Constructor of Derived " << a << endl;
}

Derived::~Derived() {
	cout << " Destructor of Derived " << endl;
}

void main() {
	Derived obj1;
	Derived obj2(1);
}
```

#### 생성자 상속 퀴즈
<img src = "https://images.velog.io/images/leeyjwinter/post/c7c29d71-2c68-455c-bc13-2028cbaf3eea/image.png" width="400">


```cpp
#include <iostream>
using namespace std;

class Student {
public:
	Student() : grade(0) {}
	Student(int argGrade) : grade(argGrade) {}
	~Student(){}
	int GetGrade() { return grade; }

private:
	int grade;
};

class Calculator {
public:
	Calculator() : numberOfStudent(0) {}
	void AddStudent(Student argStudent);
	int Sum();

private:
	Student student[50];

protected:
	int numberOfStudent;
};

void Calculator::AddStudent(Student argStudent) {
	//student 객체 추가하기
	student[numberOfStudent++] = argStudent;
}

int Calculator::Sum() {
	int sum = 0;
	for (int i = 0; i < numberOfStudent; i++)
		sum +=student[i].GetGrade();
	return sum;
}

class CalculatorEx :public Calculator {
public:
	int Average() {
		float average(0.0f);
		average = Sum() / float(numberOfStudent);
		return average;
	}
};

int main() {
	Student student1(30);
	Student student2(90);
	Student student3(100);
	Student student4(50);

	CalculatorEx cal;
	cal.AddStudent(student1);
	cal.AddStudent(student2);
	cal.AddStudent(student3);
	cal.AddStudent(student4);
	
	cout << "Sum of grades : " << cal.Sum() << endl;
	cout << "Average of grades : " << cal.Average() << endl;

}
```



## 🔑클래스 복사
>▪ 다른 변수와 마찬가지로 다른 클래스에서 클래스를 복사할 수 있습니다.
▪ 할당 연산자 '='를 사용하여 클래스를 복사할 수 있습니다.

---
"=" 이 클래스 간 복사가 되도록 오버로딩이 됨
클래스 A를 B로 복사하고 싶으면
```
B = A or B(A)
```
 와 같이 작성
 
 ---
 ## 🔑얕은 복사, 깊은 복사
 
 >**얕은 복사**
 • A를 얕게 복사하는 과정에서 B는 A의 필드 값을 모두 복사합니다. 필드 값이 메모리 주소일 경우 메모리 주소가 복사됩니다.
• B의 필드 중 하나가 가리키는 메모리 주소를 수정하면 A의 필드가 가리키는 메모리 주소도 수정됩니다

>**깊은 복사**
• 모든 필드를 복사하고 필드가 가리키는 동적으로 할당된 메모리의 복사본을 만듭니다.
• A와 B는 서로 의존하지 않고 더 느리고 더 용량을 소모하는 복사를 한다.

<img src = "https://images.velog.io/images/leeyjwinter/post/3eb1d5ec-8d79-4111-a7db-1682f4dd358f/image.png" width=40%>

## 복사 생성자
>• 복사 생성자는 새 개체를 기존 개체의 복사본으로 만들기 위한 특수 생성자입니다.
• 컴파일러는 각 클래스에 대한 복사 생성자(암묵 복사 생성자)를 자동으로 만듭니다.
• 필요에 따라 프로그래머는 사용자 정의 복사 생성자로 알려진 복사 생성자를 생성해야 합니다.

### ex1) 복사 생성자 정의
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Unit {
public:

	Unit() {
		cout << "기본 생성자" << endl;
		str = NULL;
	}
	
	Unit(const char* agStr)
	{
		cout << "매개변수를 가진 기본 생성자" << endl;
		int strLength = strlen(agStr);
		str = new char[strLength + 1];
		strcpy(str, agStr);
	}

	void set(const char* agStr) {
		strcpy(str, agStr);
	}

	void show() {
		cout << str << "\n";
	}

	Unit(Unit& agUnit) {
		cout << "복사 생성자" << endl;
	}
private:
	char* str;
};

int main() {
	Unit A("Test1");
	Unit B(A);

	cout << "----------------------------\n";
	A.set("Test2");

	cout << "A's str = : ";
	A.show();
	cout << "B's str = : ";
	B.show();
}
```
>**결과**:
매개변수를 가진 기본 생성자
복사 생성자
"----------"
A's str = : Test2
B's str = :

### ex2) 얕은 복사
단순히 포인터를 공유하기 때문에 A의 str값이 바뀌면 B도 함께 바뀐다
```cpp
	Unit(Unit& agUnit) {
		cout << "복사 생성자" << endl;
		str = agUnit.str;
	}
 ```
 
 >**결과**:
 매개변수를 가진 기본 생성자
복사 생성자
&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45
A's str = : Test2
B's str = : Test2

### ex3) 깊은 복사
str의 값을 복사해 오는 것이기 때문에 A의 str이 바뀌어도 영향을 받지 않는다.
```cpp
	Unit(Unit& agUnit) {
		cout << "복사 생성자" << endl;
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}
   ```
   >**결과**:
   매개변수를 가진 기본 생성자
복사 생성자
&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45&#45
A's str = : Test2
B's str = : Test1



## 🔑복사 함수 만들기

위 예제를 copyFrom과 copyTo 함수로 구현해 보았다

### 얕은 복사

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Unit {
public:

	Unit() {
		cout << "기본 생성자" << endl;
		str = NULL;
	}

	Unit(const char* agStr)
	{
		cout << "매개변수를 가진 기본 생성자" << endl;
		int strLength = strlen(agStr);
		str = new char[strLength + 1];
		strcpy(str, agStr);
	}

	void set(const char* agStr) {
		strcpy(str, agStr);
	}

	void show() {
		cout << str << "\n";
	}

	Unit(Unit& agUnit) {
		cout << "복사 생성자" << endl;
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}

	void copyFrom(Unit& agUnit) {
		str = agUnit.str;
	}

	void copyTo(Unit& agUnit) {
		agUnit. str = str;
	}
private:
	char* str;
};

int main() {
	Unit A("Unit A"), B("Unit B"), C("Unit C");
	A.show(); B.show(); C.show();
	cout << endl;

	A.copyFrom(B);
	C.copyTo(B);

	A.show(); B.show(); C.show();
	cout << endl;

	B.set("Unit B");

	A.show(); B.show(); C.show();
	cout << endl;

	A.set("Unit A");

	A.show(); B.show(); C.show();
	cout << endl;
}
```

>**결과:**
매개변수를 가진 기본 생성자
매개변수를 가진 기본 생성자
매개변수를 가진 기본 생성자
Unit A
Unit B
Unit C<br>
Unit B
Unit C
Unit C<br>
Unit B
Unit B
Unit B<br>
Unit A
Unit B
Unit B

기본 생성자가 각각 호출되고
얕은 복사로 A가 B에게서 얕은복사(A=B), C에게서 B로 얕은 복사(B=C)가 되었다.
여기서 B의 값을 바꾸면 얕은 복사가 된 C의 값도 바뀐다.
다음 A의 값을 바꾼다면 기존의 B가 가리키던 곳은 C가 가리키던 곳으로 되어있으므로 B,C의 값에 변화는 없다.

### 깊은 복사

```cpp
	void copyFrom(Unit& agUnit) {
		str = new char[strlen(agUnit.str) + 1];
		strcpy(str, agUnit.str);
	}

	void copyTo(Unit& agUnit) {
		agUnit.str=new char[strlen(str) + 1];
		strcpy(agUnit.str, str);
	}
 ```
 
 >결과:
 매개변수를 가진 기본 생성자
매개변수를 가진 기본 생성자
매개변수를 가진 기본 생성자
Unit A
Unit B
Unit C<br>
Unit B
Unit C
Unit C<br>
Unit B
Unit B
Unit C<br>
Unit A
Unit B
Unit C

새로운 메모리를 할당하여 값을 복사해오기 때문에 복사를 받은 값의 변화에 따른 영향이 없다.

## 🔑Friend 함수
>• 클래스 외부에서 정의된 일반 함수는 개인 데이터와 보호된 데이터에 액세스할 수 없습니다.
• 특정 클래스의 "친구"인 friend 함수는 해당 클래스의 비공개 및 보호된 데이터에 액세스할 수 있으며, 일반적으로 데이터가 공용인 것처럼 액세스할 수 없습니다.
• 클래스 정의에 friend 함수의 프로토타입이 나타나더라도 멤버 함수가 아닙니다.
• 함수는 여러 클래스의 친구로 정의할 수 있습니다.<br>
구문
**friend return_type function(arguments);**
friend int max(int a, int b);

```cpp

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Unit {
	int x, y;
public:
	Unit(int i, int j) { x = i; y = j; }
	friend bool isSame(Unit a);
};


bool isSame(Unit a)
{
	if (a.x == a.y) return true;
	else return false;
}


int main(int argc, char* argv[])
{
	Unit a(1, 2), b(3, 3);
	cout << "a(1,2) : " << isSame(a) << "\n";
	cout << "b(3,3) : " << isSame(b) << "\n";
}

```

isSame함수는 Unit class의 멤버변수와 함수를 사용할 수 있다는 의미로 클래스 안에 선언되나
클래스의 멤버는 아니다.

### friend 함수 퀴즈

<img src="https://images.velog.io/images/leeyjwinter/post/65dfda66-ddbc-48ef-a17c-72116e61ddc5/image.png">

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Square {
	int height, width;
public:
	Square(int x, int y) {
		height = x;
		width = y;
	}
	friend int addSquare(Square A, Square B);
};

int addSquare(Square A, Square B) {
	int add =  A.height * A.width + B.height * B.width;
	cout << "Sum of Areas : " << add << endl;
	return add;
}


int main()
{
	Square A(5, 3), B(4, 4);
	addSquare(A, B);
	return 0;
}
```
### 여러 클래스에 쓰인 friend 함수
![](https://images.velog.io/images/leeyjwinter/post/35da8a0c-71c1-4976-839e-8266124093b8/image.png)

매개변수로 받는 클래스가 2개 이상인 friend 함수는 클래스들에 모두 프로토타입을 적어주며 사용할 수 있다.

## 🔑배열

>배열은 하나의 식별자에 인덱스를 추가하여 개별적으로 참조할 수 있는 인접한 메모리 위치에 배치된 동일한 유형의 일련의 요소입니다.
**<br>type name[elements];
type name[]={constructor1,2,,,,,}**

ex)
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;;

class Unit {
private: 
	int x, y;
public:
	Unit(int a) {
		x = a; y = a;
	}

	void Print() {
		cout << x << "," << y << "\n";
	}
};

int main() {
	Unit aUnit[2] = { Unit(1),Unit(2) };

	for (int i = 0; i < 2; i++) {
		cout << "aUnit[" << i << "]=";
		aUnit[1].Print();
	}

	return 0;
}
```

## 🔑포인터

>• 포인터는 컴퓨터 메모리에 저장된 다른 변수(또는 객체)의 주소를 직접 참조(또는 "포인트")하는 변수입니다.
• 기본 데이터 형식에는 '*' 연산자를 사용합니다.
• 개체 포인터는 '->' 및 '*' 연산자를 사용하여 개체에 액세스할 수 있습니다.

ex)
```cpp
#include <iostream>

using namespace std;

class Unit {
private:
	int x, y;

public:
	Unit(int a, int b) {
		x = a; y = b;
	}

	void Print() {
		cout << x << "," << y << "\n";
	}
};

int main() {
	Unit aUnit[2] = { Unit(1,2),Unit(3,4) };
	int i;
	Unit* pUnit = aUnit;//배열은 첫번째 주소의 주솟값만 담고 있으므로 포인터로 쓸 수 있음

	cout << "Using '->' operator \n";
	for (i = 0; i < 2; i++) {
		pUnit->Print();
		pUnit++;
	}

	pUnit = aUnit;

	cout << "Using '.' operator \n";
	for (i = 0; i < 2; i++) {
		(*pUnit).Print();
		pUnit++;
	}
}

```

>**결과:**
Using '->' operator
1,2
3,4
Using '.' operator
1,2
3,4

같은 뜻의 구문을 위처럼 다른 방식으로 쓸 수 있다 

### this 포인터

> • C++의 모든 오브젝트는 this 포인터라고 불리는 중요한 포인터를 통해 자신의 주소에 액세스할 수 있습니다.
• 이 포인터는 모든 멤버 함수에 대한 암묵적인 파라미터입니다.

#### this 포인터 퀴즈


<div><img src="https://images.velog.io/images/leeyjwinter/post/16e745b8-261c-40d1-9538-c903625939a1/image.png" align=left width="47%"/>
<img src="https://images.velog.io/images/leeyjwinter/post/bae5bd7c-814c-492f-9d0a-5f4dcffe8a94/image.png" align=right width="47%"/></div>

```cpp
#include <iostream>


using namespace std;

class Unit {
private:
	int x, y;

public:
	Unit* p;

	Unit(int x, int y, Unit* p) : x(x), y(y), p(p) {}


	void Print() {

	cout << this->x << ", " << this->y << endl;
	if (!p) return;
	this->p->Print();


	}
};

int main() {
	Unit c(5, 6, NULL);
	Unit b(3, 4, &c);
	Unit a(1, 2, &b);

	cout << "[print a]" << endl; a.Print();
	cout << "[Print b]" << endl; b.Print();
	cout << "[Print c]" << endl; c.Print();

	return 0;

}
```

>**결과:**
[print a]
1, 2
3, 4
5, 6
[Print b]
3, 4
5, 6
[Print c]
5, 6

a.print()의 this는 &a,
&a->p는 &b, 
&b->print()는 곧 b.print()를 뜻하게 되므로 연쇄적으로 출력이 된다.

## 🔑New, Delete

>동적 메모리 할당(<-> 정적 메모리 할당)
• 메모리는 실행 시간 중에 "즉시" 할당 
• 컴파일러가 정확한 용량이나 항목 수를 미리 알 필요가 없습니다.
• new 연산자는 해당 메모리를 사용하여 객체를 만든 다음 할당된 메모리의 주소가 포함된 포인터를 반환합니다.

출처: https://boycoding.tistory.com/204 [소년코딩]<br>
**data_type *data = new data_type;
data_type *data = new data_type[elements];
class_type *object = new class_type();
class_type *objectA = new class_type[elements] class_type *objectB = new class_type[elements]{class_type(),…, class_type()};
delete data; 
delete[ ] dataA; 
delete object; 
delete[] objectA; 
delete[] objectB;**
int* plnteger = new int;
int* plntegerA = new int[10];
Unit* pUnit = new Unit(1,2);
Unit* pUnitA = new Unit[2];
Unit* pUnitB = new Unit[2]{Unit(1,2),Unit(3,4)};
delete plnteger; 
delete[ ] plntegerA; 
delete pUnit; 
delete[ ] pUnitA; 
delete[ ] pUnitB;

ex1)
```cpp
#include <iostream>

using namespace std;
class Unit {
	int x, y;
public:
	Unit(int x, int y) : x(x), y(y) {}
	void Print() {
		cout << x << "," << y << "\n";
	}
};



	
int main() {
	int* pInteger = NULL;
	pInteger = new int;

	if (!pInteger) {
		cout << "Allocation Fail\n";
		return -1;
	}

	*pInteger = 777;
	cout << "pInteger = " << pInteger << " *pInteger = " << *pInteger << "\n";

	delete pInteger;

	Unit* pUnit = new Unit(1, 2);
	pUnit->Print();
	delete pUnit;

}
```

>**결과:**
pInteger = 000001B0AD4360C0 *pInteger = 777
1,2

### New, Delete 퀴즈
![](https://images.velog.io/images/leeyjwinter/post/9fd0e549-c9c0-4c85-853a-8295a678385f/image.png)
```cpp
#include <iostream>

using namespace std;
class Unit {
	int x, y;
public:
	Unit() : x(1), y(1) {}
	Unit(int x, int y) : x(x), y(y) {}
	void Print() {
		cout << x << "," << y << "\n";
	}
};




int main() {

	Unit* pUnit = new Unit[2];

	pUnit[0] = Unit(1, 2);
	pUnit[1] = Unit(3, 4);
	for (int i = 0; i < 2; i++) {
		pUnit[i].Print();
	}



}
```

## 🔑레퍼런스(참조) 변수

>• 참조를 통해 프로그래머는 변수에 저장된 원래 데이터를 읽거나 수정하기 위해 사용할 수 있는 변수의 두 번째 이름을 만들 수 있습니다.
• 참조가 생성되면 나중에 다른 개체를 참조하도록 만들 수 없습니다.<br>
**type &name;**
int A=5;
int &rA = A;

즉, 참조형 변수는 참조하는 값과 동일하게 작동한다. &가 주소를 뜻하는 것이 아니다!

### call-by-value, call-by-reference

[call-by-value와 call-by-reference](https://programist.tistory.com/35)를 잘 설명해주신 글이 있다.

```cpp
#include <iostream>
using namespace std;

void swap(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

void pointerSwap(int *x, int *y) {
	int t;
	t = *x;
	*x =*y;
	*y = t;
}

int main() {
	int i = 4;
	int j = 7;
	cout << "i: " << i << " j : "<< j << endl;
	swap(i, j);
	cout << "i: " << i << " j : " << j << endl;

	cout << "i: " << i << " j : " << j << endl;
	pointerSwap(&i, &j);
	cout << "i: " << i << " j : " << j << endl;

}
```

>**결과:**
i: 4 j : 7
i: 4 j : 7
i: 4 j : 7
i: 7 j : 4

단순 value를 참조한 swap은 새로운 메모리를 할당받아 4,7이라는 값만 가져오는 것이므로 swap함수 내에서는 x,y가 바뀌었으나 실제 main에서는 바뀌지 않았다.

반면 pointerSwap의 경우에는 x,y의 주솟값을 받아와 주솟값에 해당하는 값을 바꾸므로 main 함수에 적용이 된다.

### 레퍼런스를 이용한 swap
```cpp
void referenceSwap(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;

}
```
포인터로 스왑한 것과 같이 스왑된다.

## 🔑배열포인터 퀴즈

![](https://images.velog.io/images/leeyjwinter/post/919e506b-964e-42b0-b73a-41d90985484e/image.png)
```cpp
#include <iostream>
#include <vector>
using namespace std;

int FindMaxNumber(vector<int> argGrade) {
	int size = argGrade.size();
	int max = argGrade[0];
	int maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (argGrade[i] > max) {
			max = argGrade[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

void main() {
	vector<int> aGrade = { 90,88,85,55,47,92,87,30,89,65 };
	int maxGradeIndex = 0;

	maxGradeIndex = FindMaxNumber(aGrade);

	cout << "Best Grade = " << aGrade[maxGradeIndex] << "\n";
	cout << "StudentID= " << maxGradeIndex + 1 << "\n";
}
```
Vector 컨테이너를 이용하여 동적인 배열을 매개변수로 받는 함수를 작성하였다.
[Vector 사용과 sizeof(arr) / sizeof(int) 가 안되는 이유](https://www.delftstack.com/ko/howto/cpp/how-to-find-length-of-an-array-in-cpp/#sizeof-%25EC%2597%25B0%25EC%2582%25B0%25EC%259E%2590%25EB%25A5%25BC-%25EC%2582%25AC%25EC%259A%25A9%25ED%2595%2598%25EC%2597%25AC-c%2b%2b%25EC%2597%2590%25EC%2584%259C-c-%25EC%258A%25A4%25ED%2583%2580%25EC%259D%25BC-%25EB%25B0%25B0%25EC%2597%25B4-%25ED%2581%25AC%25EA%25B8%25B0-%25EA%25B3%2584%25EC%2582%25B0)



## 🔑함수 오버로딩
>• 프로그래머는 입력 매개변수가 다른 한 동일한 이름으로 여러 함수를 만들 수 있습니다.
![](https://images.velog.io/images/leeyjwinter/post/b87acea3-7126-4cd6-ad19-ad4e57467959/image.png)

ex)
```cpp
#include <iostream>
using namespace std;

int Add(int arg1, int arg2) {
	cout << "int Add" << endl;
	return arg1 + arg2;
}

double Add(double arg1, double arg2) {
	cout << "double Add" << endl;
	return arg1 + arg2;
}

double Add(int arg1, double arg2) {
	cout << "double Int Add" << endl;
	return arg1 + arg2;
}

void main() {
	cout << Add(1, 1) << endl; 
	cout << Add(1.0 , 1.0) << endl;
	cout << Add(1 , 1.0) << endl;
}
```

### 함수 오버로딩 퀴즈
![](https://images.velog.io/images/leeyjwinter/post/8c87401c-5504-4312-8b72-3ccbc1a889dc/image.png)
```cpp
#include <iostream>

using namespace std;
class Triangle {
	int width;
	int height;

public:
	Triangle() {}
	Triangle(int argWidth, int argHeight) : width(argWidth), height(argHeight) {}
	int GetWidth() {
		return width;
	}
	int GetHeight() {
		return height;
	}
};

class Square{

	int width;

public:
	Square() {}
	Square(int argSide) : width(argSide) {}
	int GetWidth() {
		return width;
	}
};

class Circle {

	int radius;

public:
	Circle() {}
	Circle(int argRadius) : radius(argRadius) {}
	int GetRadius() {
		return radius;
	}
};

int Calculate(Triangle a) {
	return a.GetWidth()* a.GetHeight() / 2;
}

int Calculate(Square a) {
	return pow(a.GetWidth(), 2);
}

double Calculate(Circle a) {
	return 3.14 * pow(a.GetRadius(),2);
}

int main() {
	Triangle tri(5, 2);
	Square square(5);
	Circle circle(5);
	cout << "Area of Triangle = " << Calculate(tri) << "\n";
	cout << "Area of Square = " << Calculate(square) << "\n";
	cout << "Area of Circle = " << Calculate(circle) << "\n";
}
  ```
  
  
  ## 🔑생성자 오버로딩
  
>• 함수 오버로드와 유사한 방법으로 생성자를 오버로드할 수 있습니다.
  &nbsp;&nbsp;– 오버로드된 생성자의 이름(클래스 이름)은 같지만 인수 수는 다릅니다.
  &nbsp;&nbsp;– 전달된 인수의 수와 유형에 따라 특정 생성자가 호출됩니다.
• 여러 개의 생성자가 필요한 경우 오버로드된 함수로 구현됩니다.
• 소멸자를 오버로드할 수 없습니다.<br><br>목적:
• 여러 가지 초기화 방법을 사용하여 클래스의 유연성을 높이고
• 객체 배열을 지원
– Ex) Unit temp[2];

ex)
```cpp

#include <iostream>

using namespace std;

class Unit {
private:
	int level,type;

public:
	Unit() {
		level = 0; type = 0;
	}

	Unit(int n) {
		level = n;
		type = 0;
	}

	Unit(int n, int m) {
		level = n;
		type = m;
	}
	int GetLevel() {
		return level;
	}

	int GetType() {
		return type;
	}
};

int main() {
	Unit A[4];
	Unit B[4] = { 1,2,3,4 };
	Unit C[4] = { {1,2},{3,4},{5,6},{7,8} };

	for (int i = 0; i < 4; i++) {
		cout << "A[" << i << "] : " << "level = " << A[i].GetLevel() << " type = " << A[i].GetType() << "\n";
		cout << "B[" << i << "] : " << "level = " << B[i].GetLevel() << " type = " << B[i].GetType() << "\n";
		cout << "C[" << i << "] : " << "level = " << C[i].GetLevel() << " type = " << C[i].GetType() << "\n";
	}
}
```

>**결과:**
A[0] : level = 0 type = 0
B[0] : level = 1 type = 0
C[0] : level = 1 type = 2
A[1] : level = 0 type = 0
B[1] : level = 2 type = 0
C[1] : level = 3 type = 4
A[2] : level = 0 type = 0
B[2] : level = 3 type = 0
C[2] : level = 5 type = 6
A[3] : level = 0 type = 0
B[3] : level = 4 type = 0
C[3] : level = 7 type = 8

생성자 오버로딩을 통해 매개변수를 여러개 받는 객체들의 배열도
	Unit A[4];
	Unit B[4] = { 1,2,3,4 };
	Unit C[4] = { {1,2},{3,4},{5,6},{7,8} };
    이와 같이 수월하게 받을 수 있다.

## 🔑복사 생성자
>• 복사 생성자는 다른 개체를 사용하여 개체를 초기화할 때 호출됩니다.
• 개체 대체(치환)에는 복사 생성자를 사용하지 않습니다.<br>
**Unit A;
Unit B=A;**<br>
Unit A,B;
Unit B=A;는 치환으로서 얕은 복사가 일어나지, 복사생성자 호출 x

메모리 생성자(및 복사생성자)호출에서 할당되고 소멸자에서 delete된다.

일반적인 복사 생성자
```cpp
#define _CRT_SECURE_NO_WARNINGS
#define MAX_LEN 255
#include <iostream>


using namespace std;

class Unit {
	char* pszName;
public:
	Unit() {
		pszName = new char[MAX_LEN];
		cout << "Normal Constructor\n";
	}
	~Unit() {
		delete[] pszName;
	}

	Unit(const Unit& unit);

	void Print() {
		cout << pszName << "\n";
	}

	void Set(const char* pszIn) {
		strcpy(pszName, pszIn);
	}
};

Unit::Unit(const Unit& unit) {
	pszName = new char[MAX_LEN];
	strcpy(pszName, "Untitled");
	cout << "Copy Constructor\n";
}
int main() {
	Unit Zerg;
	Zerg.Set("zergling");
	Zerg.Print();

	Unit Spawn = Zerg;
	Spawn.Print();
}
```
Unit(const Unit& unit); 복사 생성자로 인해
A = B; 형태로 호출해도 복사 생성자가 호출된다.
위 코드의 main을 
```cpp
	Unit Zerg,Spawn;
	Zerg.Set("zergling");
	Zerg.Print();

	Spawn = Zerg;
	Spawn.Print();
   ```
   와 같이 고치면 단순 치환으로 인식하며 Normal Constructor가 생성된다. 
   
## 🔑디폴트 매개변수 
   >• 프로그래머가 지정할 필요가 없는 함수에 대한 인수입니다.
• 프로그래머는 함수 호출 중에 인수가 지정되지 않은 경우에도 항상 값을 갖는 기본 인수를 지정할 수 있습니다.<br>
void set(int x=0, int y=0);
set(); //0,0
set(1); //1,0
set(1,4); //1,4

### 디폴트 매개변수 퀴즈1

<img src ="https://images.velog.io/images/leeyjwinter/post/7432b7db-0aae-4ad0-b294-adc05cfda575/image.png">

```cpp
#include <iostream>

using namespace std;

class Unit {
	int x, y;

public:
	Unit(int x = 0, int y = 0) : x(x), y(y) {}

	int GetX() { return x; }
	int GetY() { return y; }
};
int main() {
	Unit A, B(10), C(10, 20);
	cout << "A: " << A.GetX() << "," << A.GetY() << "\n";
	cout << "B: " << B.GetX() << "," << B.GetY() << "\n";
	cout << "C: " << C.GetX() << "," << C.GetY() << "\n";
}
```

## 🔑C++ 문자열/문자 - 숫자 간 변환

[atoi, itoa, stoi, to_string](https://11001.tistory.com/14)
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

void printStar(int a) {
	for (int i = 0; i < a; i++) {
		cout << "*";
	}
	cout << endl;
}

void printStar(char b) {
	int c = b-'0';
	for (int i = 0; i < c; i++) {
		cout << "*";
	}
	cout << endl;
}

int main() {
	int a;
	char b;

	printf("Int : ");
	scanf("%d", &a);
	printf("Char : ");
	scanf("%*c%c", &b);

	printStar(a);
	printStar(b);
}
```

## 🔑연산자 오버로딩
> • 프로그래머는 대부분의 빌트인 연산자를 재정의하거나 오버로드할 수 있습니다.
• 프로그래머는 사용자 정의 유형을 가진 연산자를 사용할 수도 있습니다.
• 오버로드된 연산자는 키워드인 operator 뒤에 정의되는 연산자의 기호가 이어지는 특별한 이름을 가진 함수입니다.
• 다른 함수와 마찬가지로 오버로드된 연산자에는 반환 유형과 파라미터 목록이 있습니다.<br>
ex> Plus Operator
**Unit Unit::Operator+(Unit right){}**

### 연산자 오버로딩 규칙
>• 연산자의 우선순위는 오버로드의 영향을 받지 않습니다.
• 오버로드된 연산자는 기본값 매개변수를 사용할 수 없습니다.
• 연산자 ::(범위 확인), . (멤버 액세스), .*(멤버 포인터를 통한 멤버 액세스) 및 ?:(기본 조건)은 오버로드할 수 없습니다.
• &#42;&#42;, <>, 또는 &| 등의 새 연산자를 생성할 수 없습니다.
• 연산자 =, [], () 및 ->는 멤버 함수로만 정의할 수 있습니다.<br>
**이항 연산자(+,-, 등등)**
• 첫 번째(왼쪽) 개체는 연산자 오버로드 함수 발신자이고 두 번째(오른쪽) 개체는 전달된 인수입니다.
• 왼쪽 개체(함수 호출자)는 this 포인터를 사용하여 액세스할 수 있습니다.

<img src = "https://images.velog.io/images/leeyjwinter/post/ae07397c-293f-49e7-b89f-8cbcc88df5e2/image.png">

### 이항 연산자 오버로딩 퀴즈
<img src="https://images.velog.io/images/leeyjwinter/post/8b578154-ba9f-4e07-925f-637c4a940f48/image.png">

**ex1) - 연산자 오버로딩**

```cpp
#include <iostream>

using namespace std;

class Unit {
private: 
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	Unit operator-(Unit right);



};

Unit Unit::operator-(Unit right) {
	Unit temp;
	temp.hp = hp - right.hp;
	return temp;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3;
	Unit3 = Unit1 - Unit2;

	cout << "Unit1 hp : " << Unit1.GetHP() << endl;
	cout << "Unit2 hp : " << Unit2.GetHP() << endl;
	cout << "Unit3 hp : " << Unit3.GetHP() << endl;
}
```
연산자 오버로딩 함수에서 hp는 이항연산자의 좌측에 해당하는 unit의 hp, 이고 right.hp가 연산자의 우측에 있는 unit으로 매개변수로 쓰이는 것과 같이 실행된다.

**ex2) 연산자 오버로딩 및 상속**
```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


using namespace std;

class Unit {
private:
	int hp;
	int mp;
	int unitSize;
	char* name;
public:
	Unit() {
		hp = 0;
		mp = 0;
		unitSize = 0;
		name = NULL;
	}

	Unit(int hp, int mp, int unitSize, const char* argName) : hp(hp), mp(mp), unitSize(unitSize) {
		name = new char[strlen(argName) + 1];
		strcpy(name, argName);
	}

	~Unit() {
		if (!name) {
			delete[] name;
			name = NULL;
		}
	}

	int GetSize() { return unitSize;}

	int operator+(Unit right) { return unitSize + right.unitSize; }
	int operator-(Unit right) { return unitSize - right.unitSize; }
	int operator*(Unit right) { return unitSize * right.unitSize; }

};

class HUnit :public Unit {//자식클래스
public:
	HUnit(): Unit(45, 125, 2, "HUnit") {}
};

void funcUnit(Unit a) {
	cout << a.GetSize() << endl;
}

void funcHUnit(HUnit a) {
	cout << a.GetSize() << endl;
}
int main() {
	HUnit c1, c2;
	cout << "Total Unit Size (+): " << c1 + c2 << "\n";
	cout << "Total Unit Size (-): " << c1 - c2 << "\n";
	cout << "Total Unit Size (*): " << c1 * c2 << "\n";

	Unit a;
	funcUnit(a);
	//funcHUnit(a);

	HUnit b;
	funcUnit(b);
	funcHUnit(b);
}
```

위 구문에서 funcHUnit(a)는 실행되지 않는다, HUnit이 Unit에게서 상속받아 HUnit은 Unit형에 포함되나 Unit이 HUnit형에 포함되지는 않기 때문이다.
## 🔑비교, 논리연산자 오버로딩

>• 오버로딩이 가능합니다.
• 모든 임베디드 연산자는 bool을 반환하고 대부분의 사용자 정의 오버로드도 bool을 반환하므로 사용자 정의 연산자는 임베디드 연산자와 동일한 방식으로 사용할 수 있습니다.
• 단, 사용자 정의 연산자 오버로딩에서는 모든 유형을 반환 유형(void 포함)으로 사용할 수 있습니다.

<img src = "https://images.velog.io/images/leeyjwinter/post/0a1ce6ed-7379-459a-a315-9896daf4222f/image.png">

```cpp
#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	int operator!=(Unit right);

};

int Unit::operator!=(Unit right) {
	if (hp != right.hp) {
		return 1;
	}
	return 0;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3(5);

	if (Unit1 != Unit2)
		cout << "Unit1 != Unit2\n";
	else
		cout << "Unit1 == Unit2\n";

	if (Unit2 != Unit3)
		cout << "Unit2 != Unit3\n";
	else
		cout << "Unit2 == Unit3\n";
```

>**결과:**
Unit1 != Unit2
Unit2 == Unit3

## 🔑단항 연산자 오버로딩

>단항 연산자의 오버로딩
• 단항 연산자는 단일 피연산자에서 작동합니다.
&nbsp&nbsp&nbsp– 입력 인수 없음 (postfix=후위표기식 ex)a++ 제외)
• 단항 연산자의 반환 유형에는 제한이 없습니다. 예를 들어 논리 NOT(!)가 정수값을 반환하는 것이 타당합니다.
• 오버로드할 수 있는 단항 연산자:
&nbsp&nbsp&nbsp– ! (논리적 NOT), & (주소), ~ (보완), * (점수 삭제), + (단수 플러스), - (단수 부정), + + (증분), -- (감소), 변환 연산자

### 단항 연산자 오버로딩 예제

>전위표기식 Unit1 = ++Unit3(1 더햊진 Unit3값을 Unit1에 넣기)와
후위표기식 Unit1 = Unit3++(Unit1에 Unit3값 넣고 Unit3을 ++)
는 표기법이 다르다<br>
**전위: Unit operator++()
후위: Unit operator++(int)**

```cpp

#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	Unit operator++() {
		hp++;
		return *this;
		//Unit temp;
		//temp.hp = ++hp;
		//return temp;

	};

	Unit operator++(int) {
		Unit temp;
		temp.hp = hp++;
		return temp;
	}
};

int main() {
	Unit Unit1, Unit2, Unit3(10);


	Unit1 = Unit3++;
	Unit2 = ++Unit3;

	cout << Unit1.GetHP() << "\n";
	cout << Unit2.GetHP() << "\n";
}
```
>**결과:**
10
12

## 🔑Friend 함수 이용한 오버로딩

>• 연산자는 friend 함수로 정의할 수 있습니다.
• 단항 연산자에 대한 인수 하나와 이항 연산자에 대한 인수 두 개입니다.
• 할당 연산자 '='은(는) friend 함수가 아닌 멤버 함수를 사용하여 오버로드될 수 있습니다.<br>
**//이항
Unit operator+(Unit left, Unit right){
}
//단항
Unit operator++(Unit left){
]
//단항, 후위식
Unit operator++(Unit left, int){
}
**
일반적으로 함수 선언할 때와 달리 좌측항의 값을 받는 인수가 하나씩 더 붙음

```cpp
#include <iostream>

using namespace std;

class Unit {
private:
	int hp;

public:
	Unit() { hp = 0; }
	Unit(int i) { hp = i; }

	int GetHP() { return hp; }

	friend Unit operator+(Unit left,Unit right);

};

Unit operator+(Unit left, Unit right) {
	return left.hp + right.hp;
}

int main() {
	Unit Unit1(10), Unit2(5), Unit3(5);

	Unit3 = Unit1 + Unit2;
	cout << "Unit3 : " << Unit3.GetHP() << endl;
}
```
Friend함수는 메서드 함수가 아니므로, this를 갖지 않는 만큼 left값도 받아와야 함!

## 🔑레퍼런스를 return 하는 함수

>할당문 왼쪽에 사용할 수 있습니다.
정적 변수를 반환합니다.
새 객체를 만들지 않습니다.

[참조자를 리턴한다는 거의 의미](https://siminq.tistory.com/80)
```cpp
#include <iostream>

using namespace std;

double vals[] = { 1,2,3,4,5 };

double& setValues(int i) {
	return vals[i];
}

int main() {
	for (int i = 0; i < 5; i++) 
		cout << vals[i] << endl;
	setValues(1) = 6;

	for (int i = 0; i < 5; i++)
		cout << vals[i] << endl;
	
}
```
객체 자체를 return하여 값을 바꿔줄 수 있어 단순히 value를 받아 scope내에서만 값을 바꿔주는 것과는 다르다.


>• 템플릿은 범용 프로그래밍의 기반이며, 특정 타입에 의존하지 않고 코드를 작성합니다.
• 각 컨테이너에는 '벡터'와 같이 하나의 정의가 있지만 프로그래머는 벡터 &#60;int&#62;나 벡터 &#60;float&#62;와 같은 다양한 종류의 벡터를 정의할 수 있습니다.
• 프로그래머는 템플릿을 사용하여 함수 및 클래스를 정의할 수 있습니다.

## 🔑함수 템플릿
>• 함수 템플릿 자체는 타입이나 함수 또는 다른 개체가 아닙니다.
• 템플릿 정의만 포함된 소스 파일에서는 코드가 생성되지 않습니다.
• 어떤 코드가 나타나려면 템플릿이 인스턴스화되어야 합니다. 컴파일러가 실제 함수를 생성할 수 있도록 템플릿 인수를 지정해야 합니다.
```template <typename T> 
return_type function_name(parameter list) 
 { 
  // body of function 
 }
```


```cpp
  #include <iostream>

using namespace std;

//절댓값 출력 함수
template <typename T>
T user_abs(T a) {
	T ret;
	ret = a < 0 ? -a : a;
	cout << "processing abs : " << ret << endl;
	return ret;
}

int main() {
	int x1 = 10;
	float x2 = -10.1f;
	double x3 = -2.3;

	user_abs(x1);
	user_abs(x2);
	user_abs(x3);

	return 0;

}
```



  
```cpp
  #include <iostream>

using namespace std;

//절댓값 출력 함수
template <typename T>
T user_abs(T a) {
	T ret;
	ret = a < 0 ? -a : a;
	cout << "processing abs : " << ret << endl;
	return ret;
}

int main() {
	int x1 = 10;
	float x2 = -10.1f;
	double x3 = -2.3;

	user_abs(x1);
	user_abs(x2);
	user_abs(x3);

	return 0;

}
```
  
위와 같이 여러 타입을 받는 함수를 오버로딩 과정을 일일이 하지 않고 템플릿을 사용하여 만들 수 있다.
>**결과: **
processing abs : 10
processing abs : 10.1
processing abs : 2.3
  
## 🔑여러 형의 변수를 받는 함수의 템플릿

>템플릿의 정의를 구체적으로 해줄 경우에 error을 방지할 수 있다.

```cpp
#include <iostream>

using namespace std;

template<typename T, typename Y>T avg(T a, Y b) {
	T ret = (a + b) / 2;
	cout << "avg = " << ret << endl;
	return ret;
}

int main() {
	int x1 = 3;
	int x2 = 0;
	float x3 = 4.12f;

	avg(x1, x2);
	avg(x2, x3);
	avg(x3, x2);

}
```

### 템플릿 퀴즈, swap 함수 만들기
```cpp
#include <iostream>

using namespace std;

template<typename T, typename Y>void generic_swap(T &a, Y &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 57, b = 2;
	cout << "a=" << a << " b=" << b << endl;
	generic_swap(a, b);
	cout << "after swap: a=" << a << " b=" << b << endl;

	double c = 5.7;
	float d = 2.3f;
	cout << "c=" << c << " d=" << d << endl;
	generic_swap(c, d);
	cout << "after swap: c=" << c << " d=" << d << endl;
}
```
## 🔑클래스 템플릿
>• 템플릿 함수와 마찬가지로 템플릿클래스를 정의할 수 있습니다.
• 템플릿 클래스는 대체로 단일 데이터 유형의 특정 뉘앙스보다는 알고리즘적 사고에 더 초점을 맞춥니다.
• 키워드 'class'와 'typename'을 사용할 수 있습니다.<br>
```cpp
template <class T> class class_name {
};
class_name<type> obj_name;
```

```cpp
#define MAX_SIZE 50
#include <iostream>

using namespace std;

template <typename TYPE>
class stack {
	TYPE data[MAX_SIZE];
	int nCount;

public:
	stack() { nCount = 0; }
	void add(TYPE in) {
		data[nCount++] = in;
		if (nCount == MAX_SIZE) {
			cout << "overflow : " << nCount << endl;
		}
	}
	TYPE pop() {
		if (nCount <= 0) {
			cout << "empty" << endl;
			return data[0];
		}
		else {
			return data[--nCount];
		}

	}
};

int main() {
	stack<int> stack1;
	stack<float> stack2;
	int i;
	float j;

	for (i = 0; i < 10; i++)
		stack1.add(i);

	for (j = 0; j < 10; j += .4)
		stack2.add(j);

	for (i = 0; i < 10; i++)
		cout << stack1.pop() << " ";
	cout << endl;
	for (i = 0; i < 10; i++)
		cout << stack2.pop() << " ";
}
```
>**결과:**
9 8 7 6 5 4 3 2 1 0
10 9.6 9.2 8.8 8.4 8 7.6 7.2 6.8 6.4

### 연결리스트 템플릿 구현 퀴즈
```cpp
#include <iostream>

using namespace std;

template<typename TYPE>
class list {
	TYPE data;
	list* pNext;
public:
	list(int a) {
		data = a;
		pNext = NULL;
	}
	void add(list* pNode) {
		pNode->pNext = this;
		pNext = NULL;
	}
	list* getNext() {
		return pNext;
	}
	int getData() {
		return data;
	}
};

int main() {
	list<int> List1(0);
	list<int>* pNode, * pLast;

	pLast = &List1;
	for (int i = 1; i <= 10; i++) {
		pNode = new list<int>(i);
		pNode->add(pLast);
		pLast = pNode;
	}

	pNode = &List1;
	while (pNode) {
		cout << pNode->getData() << endl;
		pNode = pNode->getNext();
	}
}
```
## 🔑클래스 템플릿의 메서드

>• 클래스 외부에서 멤버함수를 정의할 경우 각 멤버함수 전에 template 키워드를 반복해서 써야 합니다.
• 클래스의 멤버십을 지정할 때는 템플릿 클래스임을 명시적으로 기술해야 합니다.
```
template <typename T> class class_name { fuc1(T a);
};
…
template <typename T> T class_name<type> ::fuc1(T a)
```


  
                              

                                         

