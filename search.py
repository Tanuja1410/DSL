# Menu driven program using switch-case (match)

x = [105, 101, 104, 102, 103]
key = int(input("Enter Number to search: "))

print("\n1. Linear Search")
print("2. Binary Search")
choice = int(input("Enter your choice: "))
match choice:

    case 1:
        print("\nUsing Linear Search")
        found = False

        for i in range(len(x)):
            if x[i] == key:
                print("Number found at position:", i + 1)
                found = True
                break

        if not found:
            print("Number not found")

    case 2:
        print("\nUsing Binary Search")
        x.sort()

        low = 0
        high = len(x) - 1
        found = False

        while low <= high:
            mid = (low + high) // 2

            if x[mid] == key:
                print("Number found at position:", mid + 1)
                found = True
                break
            elif x[mid] < key:
                low = mid + 1
            else:
                high = mid - 1

        if not found:
            print("Number not found")

    case 3:
        print("Invalid choice")
