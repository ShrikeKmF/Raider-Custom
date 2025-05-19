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

// AK Family
// VS121
RTG_RECOIL_SETUP(vs121, 0.2, 0.4, 1.782, 0.5)

// SVD
RTG_RECOIL_SETUP(svd, 0.2, 0.4, 1.066, 0.5)

// AK-19
RTG_RECOIL_SETUP(ak19, 0.3, 0.35, 0.36, 0.48)

// AK308
RTG_RECOIL_SETUP(ak308, 0.3, 0.4, 0.785, 0.5)

RTG_RECOIL_SETUP(ak103, 0.32, 0.42, 0.551, 0.55)

RTG_RECOIL_SETUP(ak104, 0.32, 0.42, 0.581, 0.55)

RTG_RECOIL_SETUP(ak105, 0.32, 0.42, 0.44, 0.55)

RTG_RECOIL_SETUP(akm, 0.32, 0.42, 0.541, 0.55)

RTG_RECOIL_SETUP(ak74m, 0.3, 0.35, 0.37, 0.48)

RTG_RECOIL_SETUP(ak74mr, 0.3, 0.35, 0.36, 0.48)

RTG_RECOIL_SETUP(rpk74m_556, 0.3, 0.35, 0.252, 0.48)

RTG_RECOIL_SETUP(rpk74m_300, 0.3, 0.35, 0.406, 0.48)

// ASVAL
RTG_RECOIL_SETUP(asval, 0.35, 0.4, 0.551, 0.5)

// VSSM
RTG_RECOIL_SETUP(vssm, 0.35, 0.4, 1.066, 0.5)