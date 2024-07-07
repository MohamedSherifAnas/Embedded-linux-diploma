#python program to get the command line arguments
import sys

def main():
    script_name=sys.argv[0]

    arguments = sys.argv[1:]

    print(f"script name: {script_name}")

    print(f"Arguments : {arguments}")

if __name__== "__main__":
    main()