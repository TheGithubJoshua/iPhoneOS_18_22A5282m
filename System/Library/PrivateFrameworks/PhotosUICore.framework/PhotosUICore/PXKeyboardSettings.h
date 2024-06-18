@interface PXKeyboardSettings : PXSettings

@property (nonatomic) BOOL enableTungstenKeyboardNavigation;
@property (nonatomic) BOOL enableTungstenFocusEnvironmentSupport;
@property (nonatomic) double animationDuration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) BOOL enableShadow;
@property (nonatomic) double dimmingFactor;
@property (nonatomic) double shadowYOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) long long yearsFocusAnimationStyle;
@property (nonatomic) double yearsFocusPadding;
@property (nonatomic) long long monthsFocusAnimationStyle;
@property (nonatomic) double monthsFocusPadding;
@property (nonatomic) long long daysFocusAnimationStyle;
@property (nonatomic) double daysFocusPadding;
@property (nonatomic) long long allPhotosAspectFitFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFitFocusPadding;
@property (nonatomic) long long allPhotosAspectFillFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFillFocusPadding;
@property (nonatomic) double detailsViewOverlayAlpha;

+ (id)_makeAnimationStyleChoiceRowWithTitle:(id)a0 valueKeyPath:(id)a1;
+ (id)_makeLocalFocusAnimationSection;
+ (id)sharedInstance;
+ (id)_makeGlobalFocusAnimationSection;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;
- (id)globalFocusAnimationShadow;
- (id)archiveValueForKey:(id)a0;

@end
