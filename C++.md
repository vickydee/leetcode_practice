# C++ Standard Library
References
https://cppreference.com
https://www.cs.nmsu.edu/~jcook/posts/cpp-strings/

-----
## Variable Construction
[Reference](https://stackoverflow.com/questions/31714434/declaring-vs-initializing-a-variable)
\
\
Declaration
* announces the existence, name, and type of a variable

Initialization
* gives the variable its initial value

## Pointers 
* declaring pointers \[to objects\] **DOESN'T** mean it exists \[in memory(?)\] so far
## Objects
* declared directly
* know about themselves (such as their length)
* have methods that can manipulate themselves
## std::string
### Construction
**Declaration**
\
\
<ins>String</ins>
```C++
std::string  str1;
```
<ins>Pointer</ins>
```C++
// doesn't exist yet
std::string* str2;
```
**Initialization**
\
\
<ins>String</ins>
```C++
std::string  str1("This is string one");
```
* has the assignment operator ‘=’ defined for itself
```C++
str1 = str2
```
> * str1 & str2 are seperate and unique objects
> * In C++ this copies the string data of str2 into the string data of str1.
> * In Java this would make both variables reference the same object

\
<ins>Pointer</ins>
```C++
// create a new string object and make str2 point to it.
str2 = new std::string();
//
str2 = new std::string("This is string two");
```
## std::basic_string
### Member functions

