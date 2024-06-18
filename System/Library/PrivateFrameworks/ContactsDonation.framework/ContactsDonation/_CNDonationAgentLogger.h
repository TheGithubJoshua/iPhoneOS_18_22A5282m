@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDiscoverExtensions;
- (id)init;
- (void)featureDidEnable;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)donationServiceWillStart;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)willRemoveAllRejections;
- (void)endRestorePersistedState;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)willListRejections;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)featureDidDisable;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)beginRestorePersistedState;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)donationServiceDidStart;
- (void)denyingRequestFromProcess:(int)a0;
- (void)preExpiredDonations:(id)a0;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)maintenanceServiceWillStop;
- (void)foundUnhashableValue:(id)a0;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void).cxx_destruct;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)maintenanceServiceWillStart;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)didRemoveAllRejections;
- (void)agentWillStart;
- (void)featureNotEnabled:(SEL)a0;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)willSaveExtensionVersions;
- (void)agentDidStart;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)willLoadExtensionVersions;
- (void)featureWillDisable;
- (void)featureWillEnable;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)maintenanceServiceDidStart;
- (void)didListRejections;
- (void)acceptingDonations:(id)a0;
- (void)donationServiceWillStop;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)willDiscoverExtensions;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)agentWillStop;

@end
