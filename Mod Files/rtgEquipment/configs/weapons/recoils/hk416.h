/* 
Use the calibre and the Velocity to figure out the recoil

bullpup = -0.02

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

RTG_RECOIL_SETUP(hk416_105, 0.45, 0.35, 0.45, 0.55)

RTG_RECOIL_SETUP(hk416_145, 0.45, 0.35, 0.4, 0.55)