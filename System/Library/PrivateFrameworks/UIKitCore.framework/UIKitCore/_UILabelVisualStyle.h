@interface _UILabelVisualStyle : NSObject

+ (id)inferredVisualStyle;

- (BOOL)shouldDisableUpdateTextColorOnTraitCollectionChangeForAttributedString:(id)a0 attributes:(id)a1;
- (BOOL)updatesTextColorOnUserInterfaceStyleChanges;
- (id)defaultFont;
- (BOOL)shouldDelayStartMarquee;
- (void)actionsForInitializationOfLabel:(id)a0;
- (void)actionsForDeallocationOfLabel:(id)a0;

@end
