@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAccountLogger : NSObject <CNDonationAccountLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountChanged:(id)a0;
- (id)init;
- (void)accountRemoved:(id)a0;
- (void)accountAdded:(id)a0;
- (void)removing:(id)a0;
- (void)accountsDidNotChange;
- (void)pluginUnloaded;
- (void)removalFailedWithError:(id)a0;
- (void).cxx_destruct;
- (void)pluginLoaded;
- (void)donationFailedWithError:(id)a0;
- (void)donating:(id)a0;

@end
