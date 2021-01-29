# Calendar Generation  
- Sample Input (Python)  
![Python Input](https://raw.githubusercontent.com/YangYeh-PD/Calendar_Generation/master/Python_Input.jpg)  
- Compile Message in Linux  
For C / C++  
```
gcc -o Calendar Calendar_Generation.c  
./Calendar 12 2020  
```   
``` 
g++ -c Calendar_Generation.cpp  
g++ -c Calendar.cpp  
g++ -o Calendar Calendar.o Calendar_Generation.o  
./Calendar 12 2020  
```  
You also can use the command `make` to compile it automatically, 
use `make clean` to clean all out files and execution files.  
- Sample Output  
![Output](https://raw.githubusercontent.com/YangYeh-PD/Calendar_Generation/master/Output.jpg)