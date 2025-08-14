def main():
    try: 
        x = float(input("What's x?"))
        y = float(input("What's y?"))
    except (ValueError):
        print("Numbers POR FAVOR!")
        pass 



main()
