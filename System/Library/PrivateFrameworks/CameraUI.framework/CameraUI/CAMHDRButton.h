@class UIImageView, NSArray, NSString;

@interface CAMHDRButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) UIImageView *_glyphView;
@property (copy, nonatomic, setter=_setAllowedModes:) NSArray *_allowedModes;
@property (nonatomic) long long HDRMode;
@property (nonatomic) BOOL allowsAutomaticHDR;
@property (nonatomic) BOOL allowsHDROn;
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
- (void).cxx_destruct;
- (double)padHeaderViewContentInsetLeft;
- (unsigned long long)indexForMode:(long long)a0;
- (void)_commonCAMHDRButtonInitialization;
- (void)_updateAllowedModes;
- (void)_updateFromAllowedModesChangeWithCurrentMode:(long long)a0 needsReloadData:(BOOL)a1;
- (void)setAllowsAutomaticHDR:(BOOL)a0 needsReloadData:(BOOL)a1;
- (BOOL)shouldAllowExpansion;

@end
