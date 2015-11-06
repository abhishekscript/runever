# runever
Runever an alternative for forever module of node.js that can be used to deploy any of your app be it Flask , Ruby etc.   This program runs your app and restarts automatically as soon as your app stops and records all the errors in a log file.

To run the program follow the simple instruction 

Make sure you have g++ compiler if not then 
** Step 1 : **
```
sudo apt-get install build-essential
```
** Step 2: **

Download this code and compile it as 

```
 g++ runever.cpp -o runever
```

** Step 3: **
```
chmod 777 runever
```

** Now Get Ready To Run your code forever **
```
./runever
```
# You need to compile once.
You dont have to repeat step 1-3 once you have compiled .
Simply 
``` ./runever``` once compiled.

# For WINDOWS

You need to download G++ compiler first and then compile it.
 ```
 c:\mingw\bin> g++ runever.cpp -o runever

You may try this link
http://sourceforge.net/projects/mingw/files/latest/download?source=files
