@interface CSGraphicComplicationLayoutProvider : NSObject

+ (long long)insertionIndexForElement:(id)a0 withExistingElements:(id)a1;
+ (double)complicationEdgeInset;
+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (double)interComplicationSpacing;
+ (double)interComplicationSpacingExcludingInnerInset;
+ (BOOL)canAddElement:(id)a0 toElements:(id)a1;
+ (double)containerEdgeInset;
+ (long long)_insertionIndexForElement:(id)a0 withExistingElements:(id)a1 proposedInsertionIndex:(long long)a2;
+ (id)_framesForLayoutElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
+ (id)complicationLayoutForElements:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 draggedElement:(id)a2 draggedElementPosition:(struct CGPoint { double x0; double x1; })a3;
+ (double)complicationHeight;
+ (double)complicationContainerHeight;

@end
