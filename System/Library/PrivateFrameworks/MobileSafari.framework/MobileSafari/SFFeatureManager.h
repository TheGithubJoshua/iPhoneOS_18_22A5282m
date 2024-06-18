@interface SFFeatureManager : WBUFeatureManager

@property (class, readonly, nonatomic) SFFeatureManager *sharedFeatureManager;
@property (class, readonly, nonatomic) BOOL supportsWebpageStatusBar;

@property (readonly, nonatomic) BOOL canUseLoweredCapsule;
@property (readonly, nonatomic) long long preferredCapsuleLayoutStyle;
@property (readonly, nonatomic) BOOL showRectangularTabsInSeparateBar;
@property (readonly, nonatomic) BOOL usesFormatMenuInUnifiedTabBar;
@property (readonly, nonatomic, getter=isVerticalTabsEnabled) BOOL verticalTabsEnabled;
@property (readonly, nonatomic, getter=isSiriLinkEnabled) BOOL siriLinkEnabled;
@property (nonatomic) BOOL tabDocumentCanHideToolbar;
@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable;

- (id)init;
- (void)_updateAccessLevel;

@end
