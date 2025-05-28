from matplotlib_venn import venn3
import matplotlib.pyplot as plt

# Create a Venn diagram for three sets A, B, C
# We need to specify the sizes of the regions. For (A ∩ B) ∩ (B - C) = A ∩ B ∩ C^c
# This corresponds to the region in A and B but not in C
venn = venn3(subsets=(1, 1, 0, 1, 0, 0, 0), set_labels=('A', 'B', 'C'))

# Highlight the region for A ∩ B ∩ C^c (region '110' in binary: in A, in B, not in C)
venn.get_patch_by_id('110').set_color('blue')
venn.get_patch_by_id('110').set_alpha(0.5)

# Display the plot
plt.title("Venn Diagram for (A ∩ B) ∩ (B - C)")
plt.show()