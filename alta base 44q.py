def char_frequency(s):
    # Count frequencies and sort by character
    return " ".join(f"{c}{s.count(c)}" for c in sorted(set(s)))
# Example usage
string = 'geeksforgeeks'
print(char_frequency(string))
# Output: e4 f1 g2 k2 o1 r1 s2
