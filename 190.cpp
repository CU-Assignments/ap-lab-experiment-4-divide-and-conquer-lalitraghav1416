class Solution {
 public:
  uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;

    for (int i = 0; i < 32; ++i)
      if (n >> i & 1)
        ans |= 1 << 31 - i;

    return ans;
  }
};

Input
n =
00000010100101000001111010011100
Output
   964176192 (00111001011110000010100101000000)
