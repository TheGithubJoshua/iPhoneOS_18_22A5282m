@class NSString, NSDictionary;

@interface FMDActivationLockInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isActivationLocked;
@property (retain, nonatomic) NSString *maskedAppleID;
@property (retain, nonatomic) NSString *maskedOrganizationID;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (retain, nonatomic) NSDictionary *localeStrings;
@property (nonatomic) BOOL isRestrictedSKU;
@property (nonatomic) BOOL isFindMyLPEMEnabled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
