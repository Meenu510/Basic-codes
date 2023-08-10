def first_non_repeated_character(s):
    frequency = {}

    # Create a frequency table
    for char in s:
        if char in frequency:
            frequency[char] += 1
        else:
            frequency[char] = 1

    # Traverse the string and find the first non-repeated character
    for char in s:
        if frequency[char] == 1:
            return char

    return -1  # or any specific value to indicate no non-repeated character found

# Get user input
input_str = input("Please enter a string: ")
result = first_non_repeated_character(input_str)
if result != -1:
    print(f"The first non-repeated character is: {result}")
else:
    print("No non-repeated character found.")
