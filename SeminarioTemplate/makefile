#this defines a variable CXX, 
#which is the default name used in the makefile to indicate 
#the c++ compiler 
CXX = g++ 

#the variable CXXFLAGS is used to indicate the additional
#options for the compiler
#HERE we are specifying the C++ standard (2011)
#which is allows for struct/class clean initialization.


CXXFLAGS = -std=c++11

myArrayMisura.o: myArrayMisura.C
	$(CXX) $(CXXFLAGS) -c myArrayMisura.C

esempio3.o: esempio3.C
	$(CXX) $(CXXFLAGS) -c esempio3.C

esempio3.x: esempio3.o myArrayMisura.o
	$(CXX) $(CXXFLAGS)  myArrayMisura.o esempio3.o -o esempio3.x
