# Introduction

This exercise is expected to take less than 2 hours. However, time spent is not part of our assessment. Please work at your own pace in whatever environment is most comfortable for you. If you have any questions, please reach out to us!

# Exercise

Write 3 functions (each with a different implementation) which accept a string and return a string containing the same characters as the input string -- but in a random order. Compare the 3 implementations and describe why you might prefer one implementation over another (and under what circumstances).
 
## Deliverables
- Source file(s) in the language of your choice
- Comparison of the 3 implementations

Preferred delivery is via public Git repository (e.g. GitHub).

# Functions

Three different functions are used to randomize or appear to randomize the input string. 
1. Random_Shuffle: This is a built in C++ function that will randomize characters between the two input parameters. Users might prefer this implementation due to its built in nature to save time and circumvent needing to write a custom function to perform this action. If we wanted to change the uniform random number generator we could use the shuffle function which potentially has better random number generation.
2. Next_Permuation: This built in C++ function appears to randomize the elements of a string but actually arranges them based on lexicographical order. This function might be used if a user wanted a mixed up version of the input string that would follow a lexicographical order. The appearance of randomness but yet ordered by an overall pattern.
3. Fisher Yates Shuffle: The third function utilizes an algorithm based in statistics but yet is usable for generating random permutations of a string. This method treats the characters of a string as a pool of characters that will be swapped and once they have been swapped they are removed from the pool of characters that have yet to be swapped. A user could utilize this method if they wanted a manual process that they could easily modify to create a randomization of a string. This process can be made more truly random if we tie the random number generation seed to the current time which is always changing and thusly will ensure that the random string that is generated will not always match the previously randomized result of that string.(srand(time(NULL)));
