@class VSOptional, NSString, NSArray, NSURL, NSNumber;

@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding> {
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VSOptional *uniqueID;
@property (retain, nonatomic) VSOptional *providerID;
@property (retain, nonatomic) VSOptional *providerInfo;
@property (copy, nonatomic) NSString *nameForSorting;
@property (copy, nonatomic) NSNumber *rankForSorting;
@property (readonly, nonatomic) VSOptional *displayName;
@property (copy, nonatomic) NSArray *supportedTemplates;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes;
@property (nonatomic, getter=isProhibitedByStore) BOOL prohibitedByStore;
@property (nonatomic, getter=isDeveloper) BOOL developer;
@property (nonatomic, getter=isApplication) BOOL application;
@property (copy, nonatomic) NSURL *authenticationURL;
@property (copy, nonatomic) NSURL *appStoreRoomURL;
@property (copy, nonatomic) NSArray *appAdamIDs;
@property (copy, nonatomic) NSString *defaultAppId;
@property (copy, nonatomic) NSString *providerArtworkTemplateURL;
@property (nonatomic) BOOL isSetTopBoxSupported;
@property (nonatomic) BOOL shouldShowChannelApps;
@property (nonatomic) BOOL shouldShowSubscriptionApps;
@property (nonatomic) BOOL isSTBOptOutAllowed;
@property (copy, nonatomic) NSString *providerAppArtworkTemplateURL;
@property (copy, nonatomic) NSNumber *appPlacementPosition;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSArray *allPersonalizedAppDescriptions;
@property (copy, nonatomic) NSArray *nonChannelAppDescriptions;
@property (copy, nonatomic) NSArray *storefronts;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationProvider:(id)a0;
- (BOOL)isFullySupportedForRequestsExpectingAuthenticationSchemes:(id)a0;
- (BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)a0;

@end