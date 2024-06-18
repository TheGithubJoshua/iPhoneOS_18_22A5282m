@class UIImage, UIView, NSLayoutConstraint;

@interface MPUArtworkView : UIImageView {
    NSLayoutConstraint *_aspectConstraint;
    UIView *_highlightView;
    BOOL _isDeallocating;
}

@property (nonatomic, getter=isDisplayingPlaceholder) BOOL displayingPlaceholder;
@property (readonly, nonatomic) UIImage *_externalImage;
@property (nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) double aspectConstraintMultiplier;
@property (nonatomic) BOOL automaticallyApplyAspectConstraints;
@property (nonatomic) BOOL dimsWhenHighlighted;
@property (nonatomic) BOOL forcesAnimatedUnhighlighting;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) BOOL shouldDisplayPlaceholder;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimating;
- (void)stopAnimating;
- (id)initWithImage:(id)a0;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHighlightedAnimationImages:(id)a0;
- (void)setHighlightedImage:(id)a0;
- (void)_imageDidChange;
- (void)_setPlaceholderHidden:(BOOL)a0;
- (BOOL)_shouldShowHighlightView;
- (void)_updateHighlightViewAnimated:(BOOL)a0;

@end
