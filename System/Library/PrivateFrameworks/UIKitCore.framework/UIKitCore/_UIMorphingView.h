@class UIView, NSMutableOrderedSet;

@interface _UIMorphingView : UIView

@property (retain, nonatomic) NSMutableOrderedSet *contentViews;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialBounds;
@property (weak, nonatomic) UIView *opacityPairSourceView;
@property (nonatomic) double progress;
@property (nonatomic) BOOL useOpacityPairFilter;

- (void).cxx_destruct;
- (void)addContentView:(id)a0;
- (id)_currentDestinationView;
- (void)_updateMorphProgress;

@end
