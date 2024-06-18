@class CKRecordZoneID;

@interface CKDatabaseNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;

- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRemoteNotificationDictionary:(id)a0;

@end
