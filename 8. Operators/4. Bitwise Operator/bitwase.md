#  &  AND Operator
    0 1 0 1
    0 1 1 0
  ------------
    0 1 0 0

#  | OR Operator
    0 1 0 1
    0 1 1 0
  ------------
    0 1 1 1

#  ^ XOR Operator
    0 1 0 1
    0 1 1 0
  ------------
    0 0 1 1

# ~ Ones Compliment
    ~ 0 1 0 1
    ------------
      1 0 1 0

# << Left shift operator    [shift one bit left]
    4 << 1
    (0 1 0 0) = 1 0 0 0

# formula --> a << n = a*2^n

# >> Right shift operator   [shift one bit right]
    4 >> 1
    (0 1 0 0) = 0 0 1 0

# formula --> a << n = a/2^n