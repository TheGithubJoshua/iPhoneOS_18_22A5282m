@class NSSet, NSDateComponents, NSString;

@interface DDSAssetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDateComponents *idleUsageEvictionPeriod;
@property (nonatomic) long long preferredDownloadFrequency;
@property (nonatomic) BOOL downloadOverCellular;
@property (nonatomic) BOOL downloadWithoutPower;
@property (copy, nonatomic) NSSet *notificationDownloadTriggers;
@property (copy, nonatomic) NSString *downloadCompletionNotification;

+ (id)assetPolicy;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)dumpDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToAssetPolicy:(id)a0;
- (id)stringForAssetDownloadFrequency:(long long)a0;

@end
