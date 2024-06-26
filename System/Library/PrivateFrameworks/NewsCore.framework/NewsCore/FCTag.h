@class NSDictionary, NTPBPublisherPaidDescriptionStrings, FCTagBanner, NSString, FCContentArchive, NTPBTagRecord, NSArray, FCHeadlineTemplate, FCAssetManager, FCSectionSupergroupKnobs, FCPaywallConfiguration, FCInterestToken, NSData, FCAssetHandle, FCColorGradient, FCTextInfo, FCColor, NFLazy, FCSportsRecommendationMappings, NTPBFeedConfiguration, FCContentColorMap, NSDate;
@protocol FCSportsTheming, FCTagStocksFields, FCSportsProviding, FCFeedTheming, FCTopicProviding, FCChannelProviding, FCSectionProviding;

@interface FCTag : NSObject <FCTagStocksFields, FCTagProviding, FCChannelProviding, FCSectionProviding, FCTopicProviding, FCFeedTheming, FCContentArchivable, FCSportsProviding, FCSportsTheming> {
    NSString *_groupTitleColorHexString;
    NSString *_groupDarkStyleTitleColorHexString;
    FCInterestToken *_tagInterestToken;
    unsigned long long _userFacingTagTypeOverride;
    NTPBFeedConfiguration *_feedConfiguration;
    NSArray *_sectionFeedConfigurations;
    NSString *_backgroundColorHexString;
    NSString *_darkStyleBackgroundColorHexString;
    NSString *_foregroundColorHexString;
    NSString *_darkStyleForegroundColorHexString;
    NSString *_navigationChromeBackgroundColorHexString;
    NSString *_darkStyleNavigationChromeBackgroundColorHexString;
    NSString *_navigationChromeSeparatorColorHexString;
    NSString *_darkStyleNavigationChromeSeparatorColorHexString;
    NFLazy *_lazyContentColorMap;
    FCAssetManager *_assetManager;
}

@property (readonly, nonatomic) NTPBTagRecord *tagRecord;
@property (readonly, nonatomic) FCInterestToken *tagRecordInterestToken;
@property (retain, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property (nonatomic) struct CGSize { double width; double height; } nameImageSize;
@property (nonatomic) double bannerImageScale;
@property (nonatomic) double bannerImageBaselineOffsetPercentage;
@property (copy, nonatomic) NSString *pptFeedIDOverride;
@property (readonly, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *stocksFeedConfigJSON;
@property (readonly, nonatomic) unsigned long long tagType;
@property (readonly, nonatomic) unsigned long long userFacingTagType;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) id<FCChannelProviding> asChannel;
@property (readonly, nonatomic) id<FCSectionProviding> asSection;
@property (readonly, nonatomic) id<FCTopicProviding> asTopic;
@property (readonly, nonatomic) id<FCSportsProviding> asSports;
@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *compactDisplayName;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *nameCompact;
@property (readonly, copy, nonatomic) NSString *versionKey;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) long long contentProvider;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) BOOL isDeprecated;
@property (readonly, nonatomic) BOOL isExplicitContent;
@property (readonly, copy, nonatomic) NSString *replacementID;
@property (readonly, copy, nonatomic) NSString *highlightsArticleListID;
@property (readonly, copy, nonatomic) NSString *primaryAudience;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property (readonly, copy, nonatomic) id<FCFeedTheming> theme;
@property (readonly, copy, nonatomic) FCColor *groupTitleColor;
@property (readonly, copy, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL isNotificationEnabled;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *magazineGenre;
@property (readonly, copy, nonatomic) NSString *superfeedConfigResourceID;
@property (readonly, nonatomic) double subscriptionRate;
@property (readonly, nonatomic) NSArray *adTargetingKeywords;
@property (readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property (readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs;
@property (readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property (readonly, nonatomic) BOOL publisherPaidLeakyPaywallOptOut;
@property (readonly, nonatomic) BOOL publisherPaidWebAccessOptIn;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (readonly, nonatomic) unsigned long long groupingEligibility;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSString *supergroupKnobsJson;
@property (readonly, nonatomic) NSString *supergroupConfigJson;
@property (readonly, nonatomic) FCSectionSupergroupKnobs *supergroupKnobs;
@property (readonly, nonatomic) BOOL isRealTimeTrackingEnabled;
@property (readonly, nonatomic) BOOL isArticleReadCountReportingEnabled;
@property (readonly, nonatomic) BOOL isAutoDarkModeEnabled;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isSandbox;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isSensitiveTopic;
@property (readonly, nonatomic) BOOL isNewspaper;
@property (readonly, nonatomic) BOOL isMagazine;
@property (readonly, nonatomic) BOOL isSports;
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property (readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (readonly, nonatomic) NSDictionary *publisherSpecifiedArticles;
@property (readonly, nonatomic) id<FCTagStocksFields> stocksFields;
@property (readonly, copy, nonatomic) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property (copy, nonatomic) NSString *titleDisplayPrefix;
@property (copy, nonatomic) NSString *titleDisplaySuffix;
@property (readonly, nonatomic) NSData *sportsRecommendationMappingsJSON;
@property (readonly, nonatomic) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property (readonly, nonatomic) NSData *backingTagRecordData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *sectionIDs;
@property (readonly, copy, nonatomic) NSString *defaultSectionID;
@property (readonly, nonatomic) BOOL supportsNotifications;
@property (readonly, nonatomic) BOOL isWhitelisted;
@property (readonly, nonatomic) unsigned long long channelType;
@property (readonly, copy, nonatomic) NSArray *currentIssueIDs;
@property (readonly, copy, nonatomic) NSArray *recentIssueIDs;
@property (readonly, copy, nonatomic) NSString *backIssuesListID;
@property (readonly, copy, nonatomic) NSString *parentID;
@property (readonly, nonatomic) long long feedType;
@property (readonly, nonatomic) BOOL isWhite;
@property (readonly, nonatomic) BOOL isDark;
@property (readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property (readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground;
@property (readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground;
@property (readonly, nonatomic) FCTagBanner *bannerImageForMask;
@property (readonly, nonatomic) FCTagBanner *compactBannerImage;
@property (readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property (readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property (readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property (readonly, nonatomic) FCColor *backgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleBackgroundColor;
@property (readonly, nonatomic) FCColor *foregroundColor;
@property (readonly, nonatomic) FCColor *darkStyleForegroundColor;
@property (readonly, nonatomic) FCColor *navigationChromeBackgroundColor;
@property (readonly, nonatomic) FCColor *darkStyleNavigationChromeBackgroundColor;
@property (readonly, nonatomic) FCColor *navigationChromeSeparatorColor;
@property (readonly, nonatomic) FCColor *darkStyleNavigationChromeSeparatorColor;
@property (readonly, nonatomic) FCContentColorMap *contentColorMap;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImage;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImage;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageCompact;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageCompact;
@property (readonly, nonatomic) FCAssetHandle *navigationChromeBackgroundImageLarge;
@property (readonly, nonatomic) FCAssetHandle *darkStyleNavigationChromeBackgroundImageLarge;
@property (readonly, nonatomic) FCColorGradient *navigationChromeBackgroundGradient;
@property (readonly, nonatomic) FCColorGradient *darkStyleNavigationChromeBackgroundGradient;
@property (readonly, nonatomic) FCAssetHandle *logoImageAssetHandle;
@property (readonly, nonatomic) struct FCEdgeInsets { double top; double left; double bottom; double right; } nameImageInsets;
@property (readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } nameImageForDarkBackgroundSize;
@property (readonly, nonatomic) struct FCEdgeInsets { double top; double left; double bottom; double right; } nameImageForDarkBackgroundInsets;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } nameImageMaskSize;
@property (readonly, nonatomic) struct FCEdgeInsets { double top; double left; double bottom; double right; } nameImageMaskInsets;
@property (readonly, nonatomic) NSArray *loadableFonts;
@property (readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property (readonly, nonatomic) BOOL allowCustomBottomStyle;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentMode;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeCompact;
@property (readonly, nonatomic) unsigned long long navigationChromeBackgroundImageContentModeLarge;
@property (readonly, nonatomic) FCContentArchive *contentArchive;
@property (readonly, copy, nonatomic) NSString *UMCCanonicalID;
@property (readonly, nonatomic) BOOL isSportsRecommendable;
@property (readonly, nonatomic) NSString *sportsData;
@property (readonly, copy, nonatomic) NSString *sportsLocation;
@property (readonly, nonatomic) BOOL hideLocationInMasthead;
@property (readonly, copy, nonatomic) NSString *sportsPrimaryName;
@property (readonly, copy, nonatomic) NSString *sportsSecondaryName;
@property (readonly, copy, nonatomic) NSString *sportsFullName;
@property (readonly, copy, nonatomic) NSString *sportsNickname;
@property (readonly, copy, nonatomic) NSString *sportsNameAbbreviation;
@property (readonly, nonatomic) unsigned long long sportsLeagueType;
@property (readonly, copy, nonatomic) id<FCSportsTheming> sportsTheme;
@property (readonly, nonatomic) unsigned long long sportsType;
@property (readonly, copy, nonatomic) NSString *sportsTypeDisplayName;
@property (readonly, copy, nonatomic) NSString *sportsTypePluralizedDisplayName;
@property (readonly, copy, nonatomic) NSArray *topLevelGroupsTagIdentifiers;
@property (readonly, copy, nonatomic) NSString *topLevelSportTagIdentifier;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageLargeAssetHandle;
@property (readonly, nonatomic) FCColor *sportsPrimaryColor;
@property (readonly, nonatomic) FCColor *sportsSecondaryColor;
@property (readonly, nonatomic) long long sportsLogoMastheadLeadingOffset;
@property (readonly, nonatomic) long long sportsLogoMastheadHorizontalPaddingOffset;
@property (readonly, nonatomic) unsigned long long sportsLogoMastheadVisibility;

- (BOOL)isEqualToTag:(id)a0;
- (id)freeFeedIDForBin:(long long)a0;
- (id)initChannelFromNotificationWithIdentifier:(id)a0 name:(id)a1 nameImageAssetHandle:(id)a2 nameImageMaskAssetHandle:(id)a3;
- (id)initWithTagRecord:(id)a0 assetManager:(id)a1 interestToken:(id)a2;
- (id)authorizationURL;
- (id)feedIDForBin:(long long)a0;
- (id)initWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2;
- (id)initWithTagMetadata:(id)a0 assetManager:(id)a1 isSports:(BOOL)a2;
- (BOOL)isAuthenticationSetup;
- (void)ppt_overrideFeedID:(id)a0;
- (id)paidFeedIDForSection:(id)a0 bin:(long long)a1;
- (id)initChannelForTestingWithIdentifier:(id)a0 name:(id)a1 defaultSection:(id)a2 publisherAuthorizationURL:(id)a3 publisherVerificationURL:(id)a4;
- (id)initForTestingWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2;
- (id)paidFeedIDForBin:(long long)a0;
- (id)setTitleDisplaySuffixOverride:(id)a0;
- (id)prefetchPurchaseOffer;
- (BOOL)isPurchaseSetup;
- (BOOL)isNoLongerAvailable;
- (id)setTitleDisplayPrefixOverride:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initForTestingWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2 umcCanonicalID:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)freeFeedIDForSection:(id)a0 bin:(long long)a1;
- (id)initChannelForTestingWithIdentifier:(id)a0 name:(id)a1 publisherPaidBundlePurchaseIDs:(id)a2;

@end
