# -*- coding: utf-8 -*-
"""Untitled7.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1LypBT8K7hWf2hCbrR699iGY-v-rvybST
"""

for i in range(1,2,1):
 def getside():#function to get sides of the triangle
  a=int(input("Enter the first side of the triangle:"))
  b=int(input("Enter second side of the triangle:"))
  c=int(input("Enter third side of the triangle:"))
  return a,b,c
 def cal_area():#function to calculate area
  a,b,c=getside()
  print("The sides are",a,",",b,",",c)
  s=(a+b+c)/2
  calarea=(s*(s-a)*(s-b)*(s-c))
  area=calarea**0.5
  print("Area of the triangle is:",area)
  return area
  cal_area()
 def contribution_of_triangles():#function to show contribution of two triangles 
  area1=cal_area()
  area2=cal_area()
  con1=((area1)/(area1+area2))*100
  con2=((area2)/(area1+area2))*100
  print("Contribution of triangle 1 over total area:",con1)
  print("Contribution of triangle 2 over total area:",con2)
 contribution_of_triangles()