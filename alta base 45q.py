s1 = 'ABCD'
s2 = 'CDAB'

# Check if lengths match and s2 is a substring of s1 concatenated with itself
is_rotation = len(s1) == len(s2) and s2 in (s1 + s1)

# Format to lowercase 'true'/'false' to match your output requirement
print(str(is_rotation).lower())
