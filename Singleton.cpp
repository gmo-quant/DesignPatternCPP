#include "Singleton.h"
#include "stdafx.h"
using namespace std;
Singleton::Singleton(){
	cout << "Singleton uniqueInstance" << endl;
}
Singleton * Singleton::SingletonInstance(){
	if (nullptr == uniqueInstance){
		uniqueInstance = new Singleton();
	}
	return uniqueInstance;
}
	// why declare a pointer? not a referrence?
	// why assign NULL here?

	// use nullptr otherthan NULL,
	// NULL is convertible to integer 

// initialize to nullptr, because it will be
// instanciated on demand.
Singleton * Singleton::uniqueInstance = nullptr;
static void testSingletonAddress(){
	Singleton* SI = Singleton::SingletonInstance();
	Singleton* SI2 = Singleton::SingletonInstance();

	cout << "address should be the same" << endl;
	cout << SI << endl;
	cout << SI2 << endl;
	ASSERT(SI == SI2);
}
void testSingleton(){
	TESTCase(Singleton);
	TEST(testSingletonAddress);	
}