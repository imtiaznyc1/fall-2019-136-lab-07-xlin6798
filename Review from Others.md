# ***//commented lines are my feedback***

# Code Review From Matthew Ming

* tests.cpp has no tests and there are no examples to show that the program works  
  ***//I gave user their own option to input a file path to test the program, I submitted the lab on Gradescope to test it***  
  
* extraneous include directive for climits when there is no instance of using climits variables  
  ***//Those were the header lines that were provided by Professor Genady for Lab 3. Reference --> https://maryash.github.io/135/labs/lab_03.html  ***
  
* program runs correctly but excessive use of function calls for countChar() decrease readability (possible solution is to store value into a variable)  
  ***//I will try to use a variable***  
  
Overall I found it surprising that Xinyi's approach was similar to my approach to the problem. The main differences I found were that I used helper functions to determine where the braces were while Xinyi used the .at() and .find() functions which served the same purpose.  
  ***//It was a headache fulfilling all the conditions for Gradescope, I actually had to make changes to my program 10+ times.***    
  
# Code Review From Jerry Wu
* I think it makes more sense to input a filename or a specific file to format because then you would indenting an actual file, rather than strings that you input in a the terminal. If your cin, actually expects a file input, make that more clear. Also it probably makes more sense that a file is outputted because then it would be ready to use. If we just cout a string, there is the issue of copying and pasting from the terminal, which could mess up formatting anyways.  
  ***//I was following the instructions given on the main lab site. Reference -->https://maryash.github.io/135/labs/lab_07.html  ***   
  ***//I forgot to follow the instructions for Daedalus students, BUT now I have changed my work according to the Daedalus instructions.***
  
* Why not make all functions inside funcs.cpp, so that your main routine can call less functions? It will save more time and make your code easier to reproduce.  
  ***//The main.cpp is there for user to have the option to input a file path of their choice to test the program***

* Why include the file if you aren't going to make it do anything? Add a few tests if you include the file.  
  ***//I actually don't know, it is just there for the sake of the lab***
