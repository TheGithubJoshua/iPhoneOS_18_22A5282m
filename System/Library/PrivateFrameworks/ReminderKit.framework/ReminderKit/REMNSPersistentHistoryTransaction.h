@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)changes;
- (id)accountID;
- (id)author;
- (id)initWithStorage:(id)a0;
- (id)storeID;
- (id)token;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)timestamp;
- (void)_resolveAccountID:(id)a0;

@end
