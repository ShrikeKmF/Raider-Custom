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

RTG_RECOIL_SETUP(name, leftRightPercentage, upDownPercentage, strength, shake)
*/

RTG_RECOIL_SETUP(aug, 0.45, 0.30, 0.37, 0.3)

RTG_RECOIL_SETUP(aug_hbar, 0.45, 0.30, 0.259, 0.3)

RTG_RECOIL_SETUP(aug_9, 0.25, 0.00, 0.150, 0.45)