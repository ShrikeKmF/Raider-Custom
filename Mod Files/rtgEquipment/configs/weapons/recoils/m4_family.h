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

// M4 Family Recoils
// M16A4
// Burst
RTG_RECOIL_SETUP(m16a4_556, 0.2, 0.4, 0.35, 0.25)

// M4A1
RTG_RECOIL_SETUP(m4a1_556, 0.3, 0.4, 0.4, 0.5)

// M4A1 9mm
RTG_RECOIL_SETUP(m4a1_9, 0.35, 0.2, 0.163, 0.7)

// M4A4
RTG_RECOIL_SETUP(m4a4_556, 0.35, 0.43, 0.45, 0.5)

// M4A5 (105)
RTG_RECOIL_SETUP(m4a5_105_556, 0.33, 0.42, 0.43, 0.5)

// M4A5 (145)
RTG_RECOIL_SETUP(m4a5_145_556, 0.3, 0.4, 0.4, 0.5)

// SR-16 (CQB)
RTG_RECOIL_SETUP(sr16_cqb_556, 0.33, 0.42, 0.45, 0.5)

// SR-16 (CRB)
RTG_RECOIL_SETUP(sr16_crb_556, 0.3, 0.4, 0.4, 0.5)
