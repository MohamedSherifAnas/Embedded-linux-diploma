# A python program print menu of sites for user and let him choose

import favourite_website

print(favourite_website.website_dict.keys())

x=input("choose the webiste you want: ")

favourite_website.firefox( favourite_website.website_dict.get(x))