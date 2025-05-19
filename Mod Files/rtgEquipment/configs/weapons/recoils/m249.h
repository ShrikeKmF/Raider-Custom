/* 
Strength Calculation
Use the calibre and the Velocity to figure out the recoil

bullpup = -0.02
LMG = x0.7

5.56 = 0.4 ± 0.05
50bw = 1.722 ± 0.172  
300blk = 0.551 ± 0.055  
7.62 = 1.066 ± 0.107  
277 = 1.266 ± 0.107    
9mm = 0.163 ± 0.016  
45 = 0.319 ± 0.032  
40 = 0.234 ± 0.023  
50 = 0.916 ± 0.092  
57 = 0.122 ± 0.012  
12g = 2.0 ± 0.172  

RTG_RECOIL_SETUP(name, leftRightPercentage, upDownPercentage, strength, shake)
*/

RTG_RECOIL_SETUP(m249_S_556, 0.15, 0.32, 0.338, 0.7)
RTG_RECOIL_SETUP(m249_L_556, 0.12, 0.35, 0.308, 0.67)

RTG_RECOIL_SETUP(m249_S_300, 0.15, 0.32, 0.446, 0.7)
RTG_RECOIL_SETUP(m249_L_300, 0.12, 0.35, 0.4137, 0.67)

RTG_RECOIL_SETUP(m249_762, 0.12, 0.25, 0.7644, 0.7)