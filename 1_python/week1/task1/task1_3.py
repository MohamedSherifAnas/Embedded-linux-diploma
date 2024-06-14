# A python program to access environment variables and print the current working directory


import os

print('current working directory ; ',os.getcwd())

print('*------------------------------*')
print(os.environ)
print('*------------------------------*')
print(os.environ['Home'])