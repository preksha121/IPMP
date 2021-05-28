getLevel(level)

  if level == 0
    return [0]

  upperLevel = getLevel(level - 1)

  return upperLevel + complement(upperLevel)