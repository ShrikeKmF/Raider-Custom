# Python script to generate Airframe classes with proper naming
camos = [
    ("arid", "Arid"),
    ("des", "Desert"),
    ("med", "Temperate"),
    ("nat", "Nature"),
    ("sha", "Shadow"),
    ("temp", "Temp"),
    ("tun", "Tundra"),
    ("tro", "Tropic"),
    ("urb", "Urban")
]

variants = ["1", "2", "3"]
prefix = "CTRG_cap"
model = "ACEAX_Cap"

for camo_key, camo_label in camos:
    for i, variant in enumerate(variants, start=1):
        variant_num = f"{i:02}"
        # No goggles
        print(f"class {prefix}_{variant_num}_{camo_key} : ItemCore {{")
        print(f"    class XtdGearInfo {{ model = \"{model}\"; camo = \"{camo_key}\"; variant = \"{variant}\"; googles = \"no\"; }};")
        print("};")
        # Goggles
        print(f"class {prefix}_{variant_num}_goggles_{camo_key} : ItemCore {{")
        print(f"    class XtdGearInfo {{ model = \"{model}\"; camo = \"{camo_key}\"; variant = \"{variant}\"; googles = \"yes\"; }};")
        print("};\n")
