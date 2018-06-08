# -10516---problem2-

Description

Consider a queue of groups. Each group has a unique ID denoted by a string of uppercase alphabets. The length of an ID is less than or equal to 6 characters.

A new comer has a certain group ID and a personal name. The length of the name is less than or equal to 10. For each new comer, you first check if there exists a group of the same ID. If yes, add this new comer to the end of that group; otherwise, create a new group at the end of the queue, and add this new comer to the new group.
Input

The input contains several lines. Each line presents the group ID and the name of a new comer. The group ID and the name are separated by a space.

The string in the last line is always "END" indicating the end of the input.
Output

The output contains one line. The first string is the ID of the last group in the queue. After that you need to print the name of members in the last group, one by one according to their coming order.
Note that there is a space after every string except the last one, which is ended with a newline character.
