@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;

+ (id)new;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)setRecordType:(id)a0;
- (id)initWithSubscriptionID:(id)a0;
- (id)CKPropertiesDescription;

@end
