def are_isomorphic(str1, str2):
    if len(str1) != len(str2):
        return False

    # Dictionaries to store mappings
    str1_to_str2 = {}
    str2_to_str1 = {}

    for c1, c2 in zip(str1, str2):
        if c1 in str1_to_str2 and str1_to_str2[c1] != c2:
            return False
        if c2 in str2_to_str1 and str2_to_str1[c2] != c1:
            return False
        
        str1_to_str2[c1] = c2
        str2_to_str1[c2] = c1

    return True

# Test the function
str1 = input("Enter a string")
str2 = input("Enter a string")

print("Isomorphic" if are_isomorphic(str1, str2) else "Not Isomorphic")
