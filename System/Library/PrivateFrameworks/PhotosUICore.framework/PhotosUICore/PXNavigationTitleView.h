@class UIColor, NSArray, NSString, UIFont, UILabel;

@interface PXNavigationTitleView : UIView <PXPhotosDetailsBarsContentView> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL texts; BOOL fonts; BOOL constraints; BOOL size; } _needsUpdateFlags;
}

@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_subtitleLabel;
@property (nonatomic, getter=_isSubtitleVisible, setter=_setSubtitleVisible:) BOOL _subtitleVisible;
@property (retain, nonatomic, setter=_setConstraints:) NSArray *_constraints;
@property (nonatomic) long long verticalSizeClass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *subtitleTextColor;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic) long long textAlignment;
@property (nonatomic, setter=setMargins:) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) double subviewsAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateFontsIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_invalidateConstraints;
- (void)_invalidateFonts;
- (void)updateConstraints;
- (void)_invalidateTexts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraintsIfNeeded;
- (void).cxx_destruct;
- (void)_updateSizeIfNeeded;
- (void)_invalidateSize;
- (void)_updateTextsIfNeeded;

@end
