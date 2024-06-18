@class SBFView, NSString, UIImageView, NSSet, UILabel, UIView, NSUUID;
@protocol CCUISensorAttributionCompactControlDelegate;

@interface CCUISensorAttributionCompactControl : UIControl {
    struct CGSize { double width; double height; } _singleIndicatorSize;
    NSSet *_attributions;
    NSSet *_displayedAttributions;
    NSUUID *_touchUUID;
    double _touchDownDate;
}

@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) SBFView *descriptionLabelWrapperView;
@property (retain, nonatomic) UIImageView *chevronImageView;
@property (retain, nonatomic) UIView *chevronWrapperView;
@property (nonatomic) BOOL showingCamera;
@property (nonatomic) BOOL showingMicrophone;
@property (nonatomic) BOOL showingLocation;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL alwaysHidesSensorIcons;
@property (readonly, nonatomic) UIView *cameraIndicatorView;
@property (readonly, nonatomic) UIView *micIndicatorView;
@property (readonly, nonatomic) UIView *locationIndicatorView;
@property (readonly, nonatomic) int activeIndicatorsCount;
@property (readonly, nonatomic, getter=isDisplayingSensorStatus) BOOL displayingSensorStatus;
@property (readonly, nonatomic) double fixedHeight;
@property (nonatomic) id<CCUISensorAttributionCompactControlDelegate> delegate;
@property (nonatomic) double maximumAllowableWidth;

- (void)setHighlighted:(BOOL)a0;
- (void)_configureChevronWrapperAppearance;
- (void)_layoutChevronViews;
- (void)_layoutIndicatorViews;
- (void)handleTouchDown;
- (id)_rightChevronImage;
- (void)_updateContentIfDisplayedAttributionsAreStaleAndLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_decideToExpandOrCompactAndForwardToDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_configureIndicatorViewForType:(unsigned long long)a0;
- (void)handleTouchCanceled;
- (void)_setChevronAlphaForExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)_fontForTitleLabel;
- (void)_setDescriptionLabelBlurAndAlphaForExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsMaximumAllowableWidth;
- (void)sensorAttributionsChanged:(id)a0;
- (void)_setBlurRadius:(double)a0 ofView:(id)a1;
- (id)clone;
- (void)layoutSubviews;
- (void)_configureChevronViews;
- (double)_layoutSingleIndicatorView:(id)a0 trailingX:(double)a1 visible:(BOOL)a2;
- (double)_visibleIndicatorsWidth;
- (void)_layoutDescriptionLabel;
- (void)handleTouchUpInside;

@end
