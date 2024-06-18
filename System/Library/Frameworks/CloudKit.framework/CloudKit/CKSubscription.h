@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recordType;
@property (readonly, copy) NSString *subscriptionID;
@property (readonly) long long subscriptionType;
@property (copy) CKNotificationInfo *notificationInfo;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 options:(unsigned long long)a2;
- (unsigned long long)subscriptionOptions;
- (id)initWithRecordType:(id)a0 predicate:(id)a1 subscriptionID:(id)a2 options:(unsigned long long)a3;
- (id)initWithZoneID:(id)a0 options:(unsigned long long)a1;
- (id)_initWithSubscriptionID:(id)a0 subscriptionType:(long long)a1 recordType:(id)a2;
- (id)initWithZoneID:(id)a0 subscriptionID:(id)a1 options:(unsigned long long)a2;
- (id)zoneID;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
