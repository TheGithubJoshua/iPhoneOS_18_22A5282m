@class UIImageView, UILabel;

@interface CCUISensorEntityNameAndIconView : SBFView <CCUISensorAttributionViewAnimating>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (class, readonly, nonatomic) long long maximumNumberOfLines;
@property (class, readonly, nonatomic) double horizontalPaddingBetweenIconAndLabel;

@property (retain, nonatomic) UIImageView *entityIconView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (void)setBlurRadius:(double)a0;
- (id)_titleLabelForSensorAttributionEntity:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)scalesLargeContentImage;
- (id)largeContentTitle;
- (void).cxx_destruct;
- (BOOL)showsLargeContentViewer;
- (id)initWithSensorEntity:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;

@end
