#!/usr/bin/env python3

# Created by Tong Gong
# Created time December 2020
# This is a Nested Loops program.


def area():

    userinput_base = input("Enter the base of the triangle ")
    userinput_height = input("Enter the height of the triangle ")
    print("")

    try:
        userinput_base = int(userinput_base)
        userinput_height = int(userinput_height)
        if userinput_height > 0 and userinput_base > 0:
            final = (userinput_base * userinput_height) / 2
            print("The area of the tringle is {}cm2".format(final))
        else:
            print("You are not enter a positive integer")
    except Exception:
        print("It is not an integer")


def main():
    area()


if __name__ == "__main__":
    main()
