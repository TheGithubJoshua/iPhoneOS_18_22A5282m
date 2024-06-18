@class NSMutableArray;

@interface UITableViewWrapperView : UIScrollView

@property (readonly, nonatomic) NSMutableArray *stuckToBackViews;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)_focusPrimaryScrollableAxis;
- (void)sendSubviewToBack:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)bringSubviewToFront:(id)a0;
- (void)_addSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (BOOL)_forwardsToParentScroller;
- (void).cxx_destruct;
- (void)_unstickView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)_stickViewToBack:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
