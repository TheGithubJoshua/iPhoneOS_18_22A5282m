@class UILabel, NSString, UIButton;
@protocol PUImportAddToAlbumsToolbarViewDelegate;

@interface PUImportAddToAlbumsToolbarView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *destinationLabel;
@property (retain, nonatomic) NSString *destinationDescriptionTitle;
@property (readonly, nonatomic) UIButton *destinationButton;
@property (weak, nonatomic) id<PUImportAddToAlbumsToolbarViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)_setupSubviews;
- (void)buttonPressed:(id)a0;
- (void)buttonTouchDown:(id)a0;
- (void)_setupButton;
- (id)_destinationDescription;
- (void)_animateButtonAlpha:(double)a0;
- (void)_updateButtonText;
- (void)buttonTouchDragInside:(id)a0;
- (void)buttonTouchDragOutside:(id)a0;

@end
