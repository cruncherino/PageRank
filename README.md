# PageRank INPUT OUTPUT EXAMPLES
  1. input: 

7 2 

google.com gmail.com 

google.com maps.com 

facebook.com ufl.edu 

ufl.edu google.com 

ufl.edu gmail.com 

maps.com facebook.com 

gmail.com maps.com 


    1. output: 

facebook.com 0.20 

gmail.com 0.20 

google.com 0.10 

maps.com 0.30 

ufl.edu 0.20 

 
 

  2.  input: 

7 3 

google.com gmail.com 

google.com maps.com 

facebook.com ufl.edu 

ufl.edu google.com 

ufl.edu gmail.com 

maps.com facebook.com 

gmail.com maps.com 


  2. output: 

facebook.com 0.30 

gmail.com 0.15 

google.com 0.10 

maps.com 0.25 

ufl.edu 0.20 


 3. input: 

11 1 

google.com gmail.com 

google.com maps.com 

facebook.com ufl.edu 

ufl.edu google.com 

ufl.edu gmail.com 

maps.com facebook.com 

maps.com quora.com 

quoa.co maps.edu 

quora.com ufl.com 

quora.com facebok.co.in 

quora.com quoa.co 


  3. output: 

facebok.co.in 0.10 

facebook.com 0.10 

gmail.com 0.10 

google.com 0.10 

maps.com 0.10 

maps.edu 0.10 

quoa.co 0.10 

quora.com 0.10 

ufl.com 0.10 

ufl.edu 0.10 

 

  4. Input: 

7 10000 

google.com gmail.com 

google.com maps.com 

facebook.com ufl.edu 

ufl.edu google.com 

ufl.edu gmail.com 

maps.com facebook.com 

gmail.com maps.com 

 

  4. Output: 

facebook.com 0.24 

gmail.com 0.18 

google.com 0.12 

maps.com 0.24 

ufl.edu 0.24 

 
 
  5. input: 

7 5 

google.com gmail.com 

google.com maps.com 

facebook.com ufl.edu 

ufl.edu google.com 

ufl.edu gmail.com 

maps.com facebook.com 

maps.com quora.com 


  5. output: 

facebook.com 0.02 

gmail.com 0.04 

google.com 0.02 

maps.com 0.02 

quora.com 0.02 

ufl.edu 0.02 

 

Others: 

Input:  

1 1 

A B 


Output:  

A 0.50 

B 0.50 

 
Input:  

1 3 

A B 
 

Output:  

A 0.00 

B 0.00 
