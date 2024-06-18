@class UILabel, UIImageView, UIView;
@protocol CAMVideoConfigurationStatusIndicatorDelegate;

@interface CAMVideoConfigurationStatusIndicator : CAMControlStatusIndicator

@property (readonly, nonatomic) UILabel *_resolutionLabel;
@property (weak, nonatomic) UIView *_resolutionLabelSnapshot;
@property (readonly, nonatomic) UILabel *_separatorLabel;
@property (readonly, nonatomic) UILabel *_framerateLabel;
@property (weak, nonatomic) UIView *_framerateLabelSnapshot;
@property (nonatomic) struct CGSize { double width; double height; } _resolutionSize;
@property (nonatomic) struct CGSize { double width; double height; } _separatorSize;
@property (nonatomic) struct CGSize { double width; double height; } _framerateSize;
@property (readonly, nonatomic) UIImageView *_borderImageView;
@property (nonatomic) long long resolution;
@property (nonatomic) long long framerate;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id<CAMVideoConfigurationStatusIndicatorDelegate> touchDelegate;

- (id)initWithLayoutStyle:(long long)a0;
- (id)_framerateString;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_togglesResolutionForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldUseOutline;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x2; })_labelGeometryForSize:(struct CGSize { double x0; double x1; })a0 originX:(double)a1 originY:(double)a2;
- (void)_handleTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (BOOL)_togglesResolutionOrFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_resolutionString;
- (struct CGSize { double x0; double x1; })_sizingForLabel:(id)a0 minWidth:(double)a1 spacing:(double)a2;
- (BOOL)_togglesFramerateForTouchAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)_updateAppearanceAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (id)_separatorString;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setResolution:(long long)a0 framerate:(long long)a1 animated:(BOOL)a2;
- (double)_minTextWidth;

@end