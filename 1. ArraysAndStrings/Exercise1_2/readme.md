
## I'm stuck (12/28/2016, Seoul time 1:56PM)

Concerns: 

1. Without a "main.cpp" file, cpp doesn't run on Xcode 8. Additionally, without int main(){ }, I can't run it. 
2. Without "exercise1_2::" mention, I cannot call the void function, "exercise1_2::reverse". 

Result -- I cannot run the project. 

## I found a solution (12/28/2016 Seoul time 2:12PM)

Refer to this:  [EXC_BAD_ACCESS in code from Cracking the coding interview](http://stackoverflow.com/questions/22276144/exc-bad-access-in-code-from-cracking-the-coding-interview)

Because I am used to running C++ on Visual Studio on Windows 7 or 10, and "mbed" and "arduino" settings, Xcode is just another foreign language for me and I followed the StackOverflow example. 

Concern 1. -> you can't run it, indeed, so just keep having main()
2. "exercise1_2::reverse" is calling the void function mentioned in the header file. If having a problem with it (which I can't understand why I'm having an issue) just put it in the cpp main file, and run it. It will be the same. Make sure to call it. 
