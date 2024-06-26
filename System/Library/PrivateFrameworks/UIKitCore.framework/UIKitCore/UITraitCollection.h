@class UIColor, NSString, NSDictionary, NSObject;

@interface UITraitCollection : NSObject <_UIFallbackEnvironment, NSCopying, NSSecureCoding> {
    struct { long long userInterfaceIdiom; double displayScale; long long displayGamut; long long touchLevel; unsigned long long interactionModel; unsigned long long primaryInteractionModel; long long artworkSubtype; long long horizontalSizeClass; long long verticalSizeClass; long long userInterfaceStyle; long long layoutDirection; long long forceTouchCapability; long long preferredContentSizeCategory; double displayCornerRadius; long long legibilityWeight; long long semanticContext; long long presentationSemanticContext; long long splitViewControllerContext; long long accessibilityContrast; long long userInterfaceLevel; long long vibrancy; long long userInterfaceRenderingMode; long long activeAppearance; long long focusSystemState; long long selectionIsKey; long long backlightLuminance; long long toolbarItemPresentationSize; } _builtinTraits;
    NSDictionary *_clientDefinedTraits;
    NSObject *_environmentWrapper;
    UIColor *_tintColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _isLargeContentViewerEnabled;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) long long horizontalSizeClass;
@property (readonly, nonatomic) long long verticalSizeClass;
@property (readonly, nonatomic) long long forceTouchCapability;
@property (readonly, copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) long long displayGamut;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly, nonatomic) long long userInterfaceLevel;
@property (readonly, nonatomic) long long legibilityWeight;
@property (readonly, nonatomic) long long activeAppearance;
@property (readonly, nonatomic) long long toolbarItemPresentationSize;

+ (id)_currentTraitCollection;
+ (id)_descriptionForChangeFromTraitCollection:(id)a0 toTraitCollection:(id)a1;
+ (id)_overrideTraitCollectionWithBuiltinTraitStorageBuilder:(id /* block */)a0;
+ (void)_setCurrentTraitCollection:(id)a0;
+ (id)_traitCollectionForSidebarAppearance;
+ (id)_traitCollectionWithBackgroundLevel:(long long)a0;
+ (id)_traitCollectionWithBacklightLuminance:(long long)a0;
+ (id)_traitCollectionWithContrast:(long long)a0;
+ (id)_traitCollectionWithEnvironmentWrapper:(id)a0;
+ (id)_traitCollectionWithFocusSystemState:(long long)a0;
+ (id)_traitCollectionWithPresentationSemanticContext:(long long)a0;
+ (id)_traitCollectionWithSplitViewControllerContext:(long long)a0;
+ (id)_traitCollectionWithUserInterfaceActiveAppearance:(long long)a0;
+ (id)_traitCollectionWithUserInterfaceRenderingMode:(long long)a0;
+ (id)_traitCollectionWithValue:(id)a0 forTraitNamed:(id)a1;
+ (id)_traitCollectionWithVibrancy:(long long)a0;
+ (id)currentTraitCollection;
+ (void)setCurrentTraitCollection:(id)a0;
+ (id)traitCollectionWithAccessibilityContrast:(long long)a0;
+ (id)traitCollectionWithActiveAppearance:(long long)a0;
+ (id)traitCollectionWithArtworkSubtype:(unsigned long long)a0;
+ (id)traitCollectionWithDisplayCornerRadius:(double)a0;
+ (id)traitCollectionWithDisplayGamut:(long long)a0;
+ (id)traitCollectionWithDisplayScale:(double)a0;
+ (id)traitCollectionWithForceTouchCapability:(long long)a0;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)a0;
+ (id)traitCollectionWithInteractionModel:(unsigned long long)a0;
+ (id)traitCollectionWithLayoutDirection:(long long)a0;
+ (id)traitCollectionWithLegibilityWeight:(long long)a0;
+ (id)traitCollectionWithPreferredContentSizeCategory:(id)a0;
+ (id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)a0;
+ (id)traitCollectionWithToolbarItemPresentationSize:(long long)a0;
+ (id)traitCollectionWithTouchLevel:(long long)a0;
+ (id)traitCollectionWithTraitsFromCollections:(id)a0;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)a0;
+ (id)traitCollectionWithUserInterfaceLevel:(long long)a0;
+ (id)traitCollectionWithUserInterfaceStyle:(long long)a0;
+ (id)traitCollectionWithVerticalSizeClass:(long long)a0;

- (double)displayCornerRadius;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_description;
- (long long)_compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)imageConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)_updateFidelity;
- (long long)_backgroundLevel;
- (long long)_backlightLuminance;
- (long long)_contrast;
- (id)_environmentWrapper;
- (void *)_fallbackTraitCollection;
- (long long)_focusSystemState;
- (BOOL)_hasSplitViewControllerContextPrimaryColumn;
- (BOOL)_hasSplitViewControllerContextSidebarColumn;
- (id)_namedImageDescription;
- (long long)_presentationSemanticContext;
- (long long)_splitViewControllerContext;
- (id)_traitNamesForUnspecifiedBuiltInTraits;
- (id)_traitsDescription;
- (long long)_userInterfaceActiveAppearance;
- (long long)_userInterfaceRenderingMode;
- (id)_valueForTraitNamed:(id)a0;
- (long long)_vibrancy;
- (unsigned long long)artworkSubtype;
- (BOOL)containsTraitsInCollection:(id)a0;
- (BOOL)hasDifferentColorAppearanceComparedToTraitCollection:(id)a0;
- (unsigned long long)interactionModel;
- (void)performAsCurrentTraitCollection:(id /* block */)a0;
- (unsigned long long)primaryInteractionModel;
- (long long)touchLevel;

@end
