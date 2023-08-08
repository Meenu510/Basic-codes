def are_anagrams(str1, str2):
    # Ensure both strings are the same length.
    if len(str1) != len(str2):
        return False
    return sorted(list(str1)) == sorted(list(str2))

string1 = "listen"
string2 = "silent"

print(are_anagrams(string1, string2))  # Expected output: True
