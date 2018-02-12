import sys
_, command, string = sys.argv
ans = {'digit': 0, 'alphabet': 0, 'vowel': 0, 'lowercase': 0, 'uppercase': 0}
for i in string:
    # print(i)
    if (i.isdigit()):
        ans['digit'] += 1
    if (i.isalpha()):
        ans['alphabet'] += 1
    if (i in "aeiouAEIOU"):
        ans['vowel'] += 1
    if (i.islower()):
        ans['lowercase'] += 1
    if (i.isupper()):
        ans['uppercase'] += 1
ans['alphabet'] -= ans['vowel']
print(ans[command])
