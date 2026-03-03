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
\
\
Initialization
* gives the variable its initial value

## Pointers 
* declaring pointers \[to objects\] **DOESN'T** mean it exists \[in memory(?)\] so far
## Objects
* declared directly
* know about themselves (such as their length)
* have methods that can manipulate themselves
### std::string
#### Initialization
```C++
std::string  str1;
```
* has the assignment operator ‘=’ defined for itself

> str1 = str2
> * In Java this would make both variables reference the same object
> * In C++ this copies the string data of str2 into the string data of str1.
> * str1 & str2 are seperate and unique objects
### std::basic_string

