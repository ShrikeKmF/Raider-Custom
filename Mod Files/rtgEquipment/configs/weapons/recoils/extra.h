/* 
Strength Calculation
Use the calibre and the Velocity to figure out the recoil

bullpup = -0.02
LMG = x0.7LMG = x0.7


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

RTG_RECOIL_SETUP(mg3, 0.25, 0.00, 0.7462, 0.75)

RTG_RECOIL_SETUP(ameli, 0.65, -0.10, 0.315, 0.75)

RTG_RECOIL_SETUP(pkp, 0.2, 0.15, 0.28, 0.2)

RTG_RECOIL_SETUP(m850, 0.2, 0.1, 2.06, 0.8)

RTG_RECOIL_SETUP(m4a5_145_50, 0.3, 0.4, 1.722, 0.2)