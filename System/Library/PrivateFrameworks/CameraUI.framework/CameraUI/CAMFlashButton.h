@class UIImageView, NSString;

@interface CAMFlashButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (readonly, nonatomic) UIImageView *_warningIndicatorView;
@property (nonatomic) long long flashMode;
@property (nonatomic) BOOL allowsAutomaticFlash;
@property (nonatomic, getter=isUnavailable) BOOL unavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutStyle:(long long)a0;
- (long long)modeForIndex:(long long)a0;
- (id)imageForAccessibilityHUD;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (id)_currentGlyphImageForAccessibilityHUD:(BOOL)a0;
- (void)_updateCurrentGlyphImage;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfMenuItems;
- (void)reloadData;
- (double)collapsedSelectedLabelHorizontalMargin;
- (void)setAllowsAutomaticFlash:(BOOL)a0 needsReloadData:(BOOL)a1;
- (void).cxx_destruct;
- (double)padHeaderViewContentInsetLeft;
- (long long)indexForMode:(long long)a0;
- (BOOL)shouldIgnoreMenuInteraction;
- (BOOL)wantsSelectedItemToBeVisible;
- (void)_commonCAMFlashButtonInitialization;

@end
