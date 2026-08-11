import sys

DICTIONARY = [
    "be",
    "our",
    "rum",
    "will",
    "dead",
    "hook",
    "ship",
    "blood",
    "sable",
    "avenge",
    "parrot",
    "captain",
]

def solve():
  input_data = sys.stdin.read().splitlines()
  if not input_data:
    return

  for line in input_data:
    line = line.strip()
    if not line:
      continue

    words = line.split()
    unique_words = list(dict.fromkeys(words))
    all_cipher_chars = set("".join(words))
    total_unique_chars = len(all_cipher_chars)

    valid_mappings = []

    def backtrack(idx, mapping, rev_mapping):
      if len(valid_mappings) > 1:
        return

      if idx == len(unique_words):
        if len(mapping) == total_unique_chars:
          valid_mappings.append(mapping.copy())
        return

      c_word = unique_words[idx]

      for d_word in DICTIONARY:
        if len(d_word) != len(c_word):
          continue

        possible = True
        new_map = mapping.copy()
        new_rev = rev_mapping.copy()

        for c_char, d_char in zip(c_word, d_word):
          if c_char in new_map:
            if new_map[c_char] != d_char:
              possible = False
              break
          else:
            if d_char in new_rev:
              possible = False
              break
            new_map[c_char] = d_char
            new_rev[d_char] = c_char

        if possible:
          backtrack(idx + 1, new_map, new_rev)

      backtrack(idx + 1, mapping, rev_mapping)

    backtrack(0, {}, {})

    if len(valid_mappings) == 1:
      final_map = valid_mappings[0]
      decoded_words = []
      for w in words:
        decoded_words.append("".join(final_map[ch] for ch in w))
      print(" ".join(decoded_words))
    else:
      print("Impossible")


if __name__ == "__main__":
  solve()