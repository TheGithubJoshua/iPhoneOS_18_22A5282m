@class NSAttributedString, NSString, NSArray, NSDictionary, OBBundle, OBImage;

@interface OBPrivacyFlow : OBFlow {
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    OBImage *_buttonIcon;
    BOOL _splashPListContainsLegacyStringKeys;
}

@property (retain, nonatomic) OBBundle *bundle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) BOOL platformSupported;
@property (readonly, nonatomic) BOOL showInCombinedList;
@property (readonly, nonatomic) BOOL enablesGroupingInCombinedList;
@property (readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
@property (readonly, nonatomic) OBImage *buttonIcon;
@property (readonly, nonatomic) NSString *localizedButtonTitle;
@property (readonly, nonatomic) NSString *localizedButtonCaption;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedShortTitle;
@property (readonly, nonatomic) NSString *localizedCombinedHeader;
@property (readonly, nonatomic) NSAttributedString *localizedCombinedFooter;
@property (readonly, nonatomic) NSArray *localizedContentList;

+ (id)_splashPlistFromBundle:(id)a0 forContentName:(id)a1;
+ (id)flowWithBundle:(id)a0;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)a0 preferredDeviceType:(unsigned long long)a1;

- (id)localizedCombinedHeaderForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (BOOL)_conformsToRequirement:(id)a0;
- (id)_splashPlist;
- (id)_textForConditionalItem:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)localizedButtonCaptionForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_legacyLocalizedContentListForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_stringForPlaceholderBundleWithString:(id)a0;
- (id)localizedButtonTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)localizedShortTitleForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (void)setButtonIcon:(id)a0;
- (id)_bestStringForKeyWithPrefix:(id)a0 language:(id)a1 preferredDeviceType:(unsigned long long)a2;
- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)localizedCombinedFooterForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_bundleImageNamed:(id)a0;
- (id)_splashLocalizedStringForKey:(id)a0 language:(id)a1 table:(id)a2 preferredDeviceType:(unsigned long long)a3;
- (id)_iconType;
- (id)initWithSplashContent:(id)a0;
- (id)_deviceClass;
- (id)_currentPlatform;
- (id)localizedContentListForLanguage:(id)a0 preferredDeviceType:(unsigned long long)a1;
- (id)_SKU;
- (BOOL)_conformsToRequirements:(id)a0;

@end
