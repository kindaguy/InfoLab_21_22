/***********************************
This is a template library.
This file, including both
the DECLARATION and the DEFINITION
of the library functions, must be included wherever the 
library is needed.
************************************/



//Declaration of the template functions

template <typename T1, typename T2>
T1 media(T2 [],int);


/*
Observation: the template functions defined here can be 
used on all the data types supporting the used operations/functions
*/



//Definition of the template functions.
template <typename T1, typename T2>
T1 media(T2 dati[],int dim){

   //Is a complicated thing. Refer to 
   //https://en.cppreference.com/w/cpp/language/value_initialization
   //for an explanation.
   //You need to have a vague idea of what a "class" is 
   //to appreciate what's in there.
   T2 accu{} ;

   //T2 accu = 0;


   for(int i=0; i<dim; i++)
      accu  = accu + dati[i];
   
   return accu/dim;
}

/*
Operations that need to be supported:
//Initialization
//Sum
//Division by integer
//Copy (for return)
//Assignment
The ensemble of operations that need to be supported defines
the "concept". Indeed the story is a bit more complicated.
If interested, see something here 
https://www.cppstories.com/2021/concepts-intro/
*/