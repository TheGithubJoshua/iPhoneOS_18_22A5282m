@class NSString, CAMLivePhotoBloomView;

@interface CAMLivePhotoButton : CAMExpandableMenuButton <CAMAccessibilityHUDImageProvider>

@property (readonly, nonatomic) CAMLivePhotoBloomView *_bloomView;
@property (nonatomic) long long livePhotoMode;
@property (nonatomic) BOOL allowsAutomaticMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)enablingAnimationDuration;

- (id)initWithLayoutStyle:(long long)a0;
- (long long)modeForIndex:(long long)a0;
- (id)imageForAccessibilityHUD;
- (void)setAllowsAutomaticMode:(BOOL)a0 needsReloadData:(BOOL)a1;
- (void)prepareHeaderViewForExpanding:(BOOL)a0;
- (id)titleForMenuItemAtIndex:(long long)a0;
- (id)headerView;
- (void)performEnablingAnimation;
- (long long)numberOfMenuItems;
- (id)_availableModes;
- (void)finishExpansionAnimated:(BOOL)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)_currentBaseImage;
- (void)interruptEnablingAnimation;
- (long long)indexForMode:(long long)a0;
- (void)_updateBaseImage;
- (void)setSelectedIndex:(long long)a0;

@end
