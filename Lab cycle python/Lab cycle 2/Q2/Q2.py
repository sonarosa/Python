# -*- coding: utf-8 -*-
"""Untitled10.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/12eWngKDcE6YDjjrBVcztSSDCjJmutVqA
"""

"""2.Write a program to read a string containing numbers seperated  by a space 
and convert it as a list of integers.Perform the following operations on it.
1.Rotate elements in a list by 'k'position to the right 
2.Convert the list into a tuple using list comprehension 
3.Remove all duplicates from the tuple and convert them into a list again.
4.Create another list by putting the results of the evaluation of the function
f(x)=x^2-x with each element in the final list.
5.After sorting them individually,merge the two lists to create a single sorted 
list.
"""
#Converting into list of integera
string_no=input("Enter list of numbers:")
s=list(string_no.split(" "))
l=[]
for i in s:
  l.append(int(i))
print("Integer list:",l)
#Rotation by k positions
print("Rotating elements by k positions\n")
k=int(input("Enter the value of k to shift by right:"))
while k>0:
 l.insert(0,l[-1])
 l.pop()
 k-=1
print(l)
#tuple
print("\nConverting list to tuple\n")
t=tuple(l)
print(t)
print(type(t))
print("Removing all duplicates\n")
t=tuple(set(t))
l=list(t)
print(l)
print("f(x)=x^2-x")

l1=[]
for i in l:
  l1.append(i**2-i)
print(l1)
print("Sorting and merging l1 and l: ")
sort_1=l+l1
sort_1.sort()
print(sort_1)