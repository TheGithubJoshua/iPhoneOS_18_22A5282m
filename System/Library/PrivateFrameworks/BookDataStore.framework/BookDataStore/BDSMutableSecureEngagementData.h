@class NSString, NSData, NSDate, CKRecord;
@protocol BCCloudDataPrivacyDelegate;

@interface BDSMutableSecureEngagementData : BCMutableCloudData <BDSSecureEngagementData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *startTimestampString;
@property (nonatomic) double durationInterval;
@property (retain, nonatomic) NSData *value;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) long long editGeneration;
@property (readonly, nonatomic) long long syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)zoneName;
- (id)recordType;
- (id)initWithRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)configuredRecordFromAttributes;
- (id)initWithCloudData:(id)a0;
- (id)initWithStartTimestampString:(id)a0 durationInterval:(double)a1;

@end