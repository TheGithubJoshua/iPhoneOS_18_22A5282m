@class SUDescriptor, NSString, NSObject;
@protocol OS_dispatch_queue, SUDownloadPolicy;

@interface SUDownloadOptions : SUOptionsBase <NSSecureCoding, NSCopying> {
    int _activeDownloadPolicyType;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *downloadDescriptor;
@property (nonatomic, getter=isDownloadOnly) BOOL downloadOnly;
@property (nonatomic, getter=isAutoDownload) BOOL autoDownload;
@property (nonatomic) int downloadFeeAgreementStatus;
@property (nonatomic) int termsAndConditionsAgreementStatus;
@property (nonatomic) int activeDownloadPolicyType;
@property (retain, nonatomic) id<SUDownloadPolicy> activeDownloadPolicy;
@property (nonatomic) BOOL allowUnrestrictedCellularDownload;
@property (readonly, retain, nonatomic) SUDescriptor *descriptor;
@property (readonly, nonatomic, getter=isEnabledForCellular) BOOL enabledForCellular;
@property (readonly, nonatomic, getter=isEnabledForWifi) BOOL enabledForWifi;
@property (readonly, nonatomic, getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower;
@property (readonly, nonatomic, getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming;
@property (readonly, nonatomic, getter=isEnabledForExpensiveNetwork) BOOL enabledForExpensiveNetwork;
@property (readonly, nonatomic, getter=isCacheDeleteSpecialCaseEnabled) BOOL cacheDeleteSpecialCaseEnabled;
@property (readonly, nonatomic, getter=isAppOffloadEnabled) BOOL appOffloadEnabled;
@property (retain, nonatomic) NSString *clientName;

- (id)initWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)allowCellular;
- (id)initWithMetadata:(id)a0 andDescriptor:(id)a1;
- (BOOL)allowExpensiveNetwork;
- (BOOL)allowsUnrestrictedCellularDownload;

@end
