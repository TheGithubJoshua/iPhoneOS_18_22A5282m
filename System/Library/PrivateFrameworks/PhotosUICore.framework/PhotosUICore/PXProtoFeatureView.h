@class UIColor, NSString, UIImageView, UIView;
@protocol PXProtoFeature;

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL content; } _needsUpdateFlags;
}

@property (readonly, nonatomic) UIImageView *_removeIconView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) double recommendedCompactContentHeight;
@property (readonly, nonatomic) BOOL wantsContentView;
@property (readonly, nonatomic) BOOL shouldUpdateContentOnResize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } minimumMargins;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } regularContentSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } compactContentSize;
@property (readonly, nonatomic) id<PXProtoFeature> feature;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic) UIColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateIfNeeded;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_invalidateContent;
- (void)_setNeedsUpdate;
- (void)setSelected:(BOOL)a0;
- (void)_updateContentIfNeeded;
- (void)updateContent;
- (void)setFeature:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)prepareForReuse;
- (void)setDisabled:(BOOL)a0;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;

@end
