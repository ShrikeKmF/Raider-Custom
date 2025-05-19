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

// 762
// FN Mag
RTG_RECOIL_SETUP(fn_mag_762, 0.25, 0.00, 0.7644, 0.55)

// FN Mag Shorty
RTG_RECOIL_SETUP(fn_mag_762_short, 0.4, 0.2, 0.8162, 0.55)

// 277
// FN Mag
RTG_RECOIL_SETUP(fn_mag_277, 0.35, 0.10, 0.7784, 0.55)

// FN Mag Shorty
RTG_RECOIL_SETUP(fn_mag_277_short, 0.4, 0.2, 0.9884, 0.55)