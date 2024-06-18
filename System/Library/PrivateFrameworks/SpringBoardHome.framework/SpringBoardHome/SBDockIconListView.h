@interface SBDockIconListView : SBIconListView

@property (class, readonly, nonatomic) double defaultHeight;

+ (unsigned long long)defaultIconViewConfigurationOptions;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrameForOrientation:(long long)a0;

- (BOOL)adaptsOrientationToTraitCollection;
- (BOOL)allowsAddingIconCount:(unsigned long long)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)isVertical;
- (id)initWithModel:(id)a0 layoutProvider:(id)a1 iconLocation:(id)a2 orientation:(long long)a3 iconViewProvider:(id)a4;

@end
