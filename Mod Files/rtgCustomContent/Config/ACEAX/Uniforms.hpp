class ACEAX_CTRG_Uniforms
{
    label = "CTRG Uniforms";
    author = "Shrike";
    options[] = {"camo", "variant"};

    class camo
    {
        values[] = {"arid", "des", "med", "nat", "sha", "temp", "tun", "tro", "urb"};
        class arid { label = "Arid"; description = "Arid environment pattern"; };
        class des { label = "Desert"; description = "Desert environment pattern"; };
        class med { label = "Med"; description = "Mediterranean environment pattern"; };
        class nat { label = "Natural"; description = "Natural terrain pattern"; };
        class sha { label = "Shadow"; description = "Shadow / Night operations"; };
        class temp { label = "Temperate"; description = "Temperate woodland pattern"; };
        class tun { label = "Tundra"; description = "Cold environment tundra pattern"; };
        class tro { label = "Tropic"; description = "Tropical jungle pattern"; };
        class urb { label = "Urban"; description = "Urban environment pattern"; };
    };

    class variant
    {
        values[] = {
            "Fleece", "Fleece_S", 
            "G3Field_Full", "G3Field_Half", "G3Field_S",
            "G3Field_Full_Roll", "G3Field_Half_Roll", "G3Field_S_Roll",
            "PCU_Full", "CCTRG_PCU_Half", "PCU_S", "Tshirt"
        };

        class Fleece { label = "Fleece"; description = "Full fleece uniform"; };
        class Fleece_S { label = "Fleece S"; description = "Short fleece variant"; };
        class G3Field_Full { label = "G3 Full"; description = "Full G3Field uniform"; };
        class G3Field_Half { label = "G3 Half"; description = "Half G3Field uniform"; };
        class G3Field_S { label = "G3 S"; description = "Short G3Field variant"; };
        class G3Field_Full_Roll { label = "G3 Full Roll"; description = "Full G3Field with rolled sleeves"; };
        class G3Field_Half_Roll { label = "G3 Half Roll"; description = "Half G3Field with rolled sleeves"; };
        class G3Field_S_Roll { label = "G3 S Roll"; description = "Short G3Field with rolled sleeves"; };
        class PCU_Full { label = "PCU Full"; description = "Full PCU uniform"; };
        class CCTRG_PCU_Half { label = "PCU Half"; description = "Half PCU uniform"; };
        class PCU_S { label = "PCU S"; description = "Short PCU variant"; };
        class Tshirt { label = "Tshirt"; description = "Lightweight T-shirt variant"; };
    };
};
