@class NSString, NSURL, NSDate, MKWalletMerchantStylingInfo;

@interface PKMapsBrand : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) int resultProviderIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) long long category;
@property (copy, nonatomic) NSString *detailedCategory;
@property (retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo;
@property (copy, nonatomic) NSURL *logoURL;
@property (retain, nonatomic) NSURL *heroImageURL;
@property (copy, nonatomic) NSString *heroImageAttributionName;
@property (copy, nonatomic) NSURL *businessChatURL;
@property (copy, nonatomic) NSDate *lastProcessedDate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)_deleteDeviceDataFromCloudStoreRecord:(id)a0;
+ (void)deleteFromCloudStoreRecord:(id)a0 codingType:(unsigned long long)a1;
+ (id)recordNamePrefix;

- (id)initWithCoder:(id)a0;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (void)_encodeDeviceDataForCloudStoreCoder:(id)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (BOOL)hasCloudArchivableDeviceData;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)isEqualToMapsBrand:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;

@end