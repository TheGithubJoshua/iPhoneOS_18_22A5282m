@class UIImageView, UIView, NSLayoutConstraint;
@protocol TUICandidateViewStyle;

@interface TUICandidateMask : UIView

@property (retain, nonatomic) UIImageView *leftEdgeImageView;
@property (retain, nonatomic) NSLayoutConstraint *leftEdgeWidthConstraint;
@property (retain, nonatomic) UIImageView *rightEdgeImageView;
@property (retain, nonatomic) NSLayoutConstraint *rightEdgeWidthConstraint;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) id<TUICandidateViewStyle> style;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateLayout;

@end
