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
# You ned to compile once so step 1-3 need not to be repeated once done.
