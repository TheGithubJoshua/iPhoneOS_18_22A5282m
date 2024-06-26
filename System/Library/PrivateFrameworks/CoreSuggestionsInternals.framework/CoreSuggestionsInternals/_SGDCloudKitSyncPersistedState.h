@class CKRecordID, CKServerChangeToken, NSData, NSString, NSNumber;

@interface _SGDCloudKitSyncPersistedState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ changeCallback;
@property (retain, nonatomic) NSData *salt;
@property (retain, nonatomic) CKRecordID *saltAtomicReferenceId;
@property (retain, nonatomic) NSNumber *saltUsesManatee;
@property (retain, nonatomic) CKServerChangeToken *syncToken;
@property (retain, nonatomic) NSNumber *hasSubscription;
@property (retain, nonatomic) NSNumber *eventsWereRemovedFromEventKit;
@property (retain, nonatomic) NSString *primaryICloudCalendarAccount;
@property (retain, nonatomic) NSNumber *hasDeferredSync;
@property (retain, nonatomic) NSNumber *hasDeferredProcessStateChanges;

+ (id)properties;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (SEL)_setterForProperty:(struct objc_property { } *)a0;
- (void)stopKvo;
- (SEL)_getterForProperty:(struct objc_property { } *)a0;
- (void)setupKvo;

@end
