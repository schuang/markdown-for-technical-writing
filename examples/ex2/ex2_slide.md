---
title: Using Markdown for Technical Documentation
date: Nov 12, 2020
author:
- Shao-Ching Huang
bibliography: ref.bib
---

# Introduction

Plain text-like format is good

- Permanent preservation

- Version control friendly


# Considerations

- text-based

- pdf output

- Math typing: \textcolor{red}{red} This should be black again.

- Minimum maintenance



# Python code example:


```python
import os, glob
fl = glob.glob("*.cpp")
print(fl)
```

# Julia code example

Julia code example:
```julia
using LinearAlgebra
A = [1, 2, 3, 4]
B = A'
```

# Cite references

- This is paper 1 [@greengard1987fast]

- Show just the year:
    - This paper by Waston and Crick [-@watson1953molecular]

# References

::: {#refs}
:::
