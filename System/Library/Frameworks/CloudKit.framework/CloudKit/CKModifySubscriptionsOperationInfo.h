@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
