def minion_game(string):
    # your code goes here
        word = len(string)
        vt, ct = 0, 0
        vowel = 'AEIOU'
        
        for i in range(word):
            if string[i] in vowel:
                vt = vt + (word - i)

            else:
                ct = ct + (word - i)

        if ct > vt:
              print("Stuart", str(ct))
        elif ct == vt:
              print("Draw")
        else:
              print("Kevin", format(vt))

