@interface UISegmentedControlTVStyleProvider : UISegmentedControlOutlineStyleProvider

+ (id)_tvDefaultTextColorDisabledSelected;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorDisabledUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorFocused;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleDark;
+ (id)_tvDefaultTextColorNormalUserInterfaceStyleLight;
+ (id)_tvDefaultTextColorSelected;

- (double)selectionIndicatorOverflowForControlSize:(int)a0;
- (double)defaultHeightForControlSize:(int)a0;
- (id)fontColorForSegment:(id)a0 enabled:(BOOL)a1 selected:(BOOL)a2 state:(unsigned long long)a3;
- (double)cornerRadiusForControlSize:(int)a0;
- (BOOL)useGeneratedImages;
- (BOOL)useTVStyleFocusSelection;
- (id)fontForControlSize:(int)a0 selected:(BOOL)a1;
- (double)dividerWidthForControlSize:(int)a0;

@end
