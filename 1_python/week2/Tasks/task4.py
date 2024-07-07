#Python program to get the ASCII value of a character.

def main():
    # Get a character input from the user
    char = input("Enter a character: ")
    
    # Get the ASCII value of the character using ord()
    ascii_value = ord(char)
    
    # Print the ASCII value
    print(f"The ASCII value of '{char}' is {ascii_value}")

if __name__ == "__main__":
    main()