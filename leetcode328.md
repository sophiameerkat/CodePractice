tags: linked list  
Idea:  
If the list is empty or there is only one element in the list, return the original list.  
Use a variable `cnt` to save which mode the current id is (0 base).  
If the variable mod 2 == 0, then save the value for the next one and assign the new next to it.  
If the variable mod 2 == 1, then the new next will be the one which is saved in the previous step.  
Be careful of the base case.
