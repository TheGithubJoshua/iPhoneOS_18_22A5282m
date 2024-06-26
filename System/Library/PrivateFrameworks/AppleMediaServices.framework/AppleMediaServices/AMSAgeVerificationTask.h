@class NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSQRCodeDialogTask;
@protocol AMSBagProtocol, AMSRequestPresentationDelegate;

@interface AMSAgeVerificationTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) AMSQRCodeDialogTask *task;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSString *pincode;
@property (readonly, nonatomic) id<AMSRequestPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (id)_errorCheckWithAccount:(id)a0 bag:(id)a1;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (id)performTask;
- (id)_performTaskForAccount:(id)a0 withBag:(id)a1;
- (void)_handleAccountStoreDidChangeNotification:(id)a0 at:(id)a1;
- (void)_startObservingAccountStoreChanges;
- (void)_stopObservingAccountStoreChanges;
- (id)initWithAccount:(id)a0 bag:(id)a1 options:(id)a2 presentationDelegate:(id)a3;
- (id)isVerificationNeeded;

@end
