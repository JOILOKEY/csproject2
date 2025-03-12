# csproject2
## Algorithm


Define constant MAX with value 9.

Define function printValues with an integer pointer parameter pbubble:
    Print the opening bracket "[".
    Loop through the array from index 0 to MAX-1:
        Print the value at pbubble[i].
    Print the closing bracket "]".

Define function swap with two integer pointer parameters a and b:
    Create a temporary variable temp.
    Assign the value of *a to temp.
    Assign the value of *b to *a.
    Assign the value of temp to *b.

Define function sort with an integer pointer parameter psort:
    Declare variables i and j.
    Loop i from 0 to MAX-2:
        Loop j from 0 to MAX-2:
            If psort[j] is greater than psort[j+1]:
                Call swap with addresses of psort[j] and psort[j+1].
                Call printValues with psort.

Define main function:
    Declare an array values with values {7, 3, 9, 4, 6, 1, 2, 8, 5}.
    Print "Before:".
    Call printValues with values.
    Declare integers x and y with values 3 and 5, respectively.
    Print x and y.
    Call swap with addresses of x and y.
    Print x and y.
    Call sort with values.
    Print "After:".
    Call printValues with values.

End main

