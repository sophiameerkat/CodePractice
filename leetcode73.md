tags: array  
Idea:  
1. The first idea is to use two vectors (one for row, one for column) to store whether a specific row or column needs to be changed. However, it costs too much memory.  
2. Use the first of every row and every column as flags to store the information of whether this row or column needs to be changed.  
3. Be careful of the original value of the first row and first column.
