@interface UISegmentedControlOutlineStyleProvider : UISegmentedControlDefaultStyleProvider

- (BOOL)useSelectionIndicatorStyling;
- (double)defaultHeightForControlSize:(int)a0;
- (id)fontColorForSegment:(id)a0 enabled:(BOOL)a1 selected:(BOOL)a2 state:(unsigned long long)a3;
- (double)defaultContentPaddingWidth;
- (BOOL)animateSelectionSliding;
- (double)defaultTextContentPaddingWidth;
- (id)fontForControlSize:(int)a0 selected:(BOOL)a1;

@end
