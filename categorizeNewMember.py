ans = []
data = [(16, 23), (73, 1), (56, 20), (1, -1)]
for cat in data:
    if cat[0] >= 55 and cat[1] > 7:
        ans.append("Senior")
    elif cat[1] <= 7 or cat[0] < 55:
        ans.append("Open")

print(ans)
