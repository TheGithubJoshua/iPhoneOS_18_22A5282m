@class HMFMessageDestination, HMDAppleAccountManager, NSArray;
@protocol HAPKeyStore;

@interface HMDRemoteAccountMessageFilter : HMDMessageFilter

@property (retain, nonatomic) HMDAppleAccountManager *appleAccountManager;
@property (retain, nonatomic) id<HAPKeyStore> systemKeychainStore;
@property (readonly) HMFMessageDestination *target;
@property (readonly, copy) NSArray *allowedMessages;

+ (id)logCategory;

- (id)initWithTarget:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithTarget:(id)a0 allowedMessages:(id)a1;
- (BOOL)acceptMessage:(id)a0 target:(id)a1 errorReason:(id *)a2;
- (id)initWithTarget:(id)a0 allowedMessages:(id)a1 appleAccountManager:(id)a2 systemKeychainStore:(id)a3;

@end
