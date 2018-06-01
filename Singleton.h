/*
 many objects we need only one and only one of.

 singleton pattern is a convention for ensuring 
 that there is one and only one object is instantiated
 for a class.

 it also give a global point of access, 
 like a global variable, but without
 the downside, where it will not instantiate 
 an object of the class until the first time 
 you need it

 multithread

 lazy/eager manner

 key:
 static class variable/ method and access modifier
*/

#pragma once

#include "stdafx.h"

class Singleton{
public:
	// public static class method
	// global point of access to the unique instance
	// ensure that there is one and only one instance 
	// of the class

	// why return a pointer not a reference?
	static Singleton* SingletonInstance();
	Singleton(const Singleton&) = delete;
	Singleton& operator = (const Singleton&) = delete;
private:
	// the copy constructor and copy assignment 
	// operator should be declared private
	// otherwise client will be able to clone 
	// the object.

	// there is another way to avoid it
	// leave the copy constructor and copy assignment 
	// operator public and explictly delete it.
	// recommend with c++ 11
	// Singleton(const Singleton&);
	// Singleton& operator = (const Singleton&);


	// private static class variable, 
	// to hold the unique instance of the class
	static Singleton *uniqueInstance; 
	// private constructor
	// avoid instantiation outside of the class
	Singleton();
};

void testSingleton();

