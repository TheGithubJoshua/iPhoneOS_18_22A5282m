@class NSString, PSUIAppInstallController, CoreTelephonyClient, CTCarrierSpaceAppsInfo, CTCarrierSpaceUserConsentFlowInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, NSNumber;

@interface PSUICarrierSpaceManager : NSObject <CTCarrierSpaceClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    struct __CTServerConnection { } *_serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (long long)bytesFromString:(id)a0 carrierSpaceUnits:(long long)a1;
+ (int)carrierMetricTypeForString:(id)a0;
+ (id)getNSURLSessionConfiguration;
+ (BOOL)isCarrierMetricTypeValid:(int)a0;

- (void)refresh;
- (void)userConsentFlowInfoDidChange;
- (id)capabilities;
- (id)init;
- (id)getLogger;
- (void)plansDidChange;
- (void)capabilitiesDidChange:(id)a0;
- (void)usageDidChange;
- (void).cxx_destruct;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)dealloc;
- (void)appsDidChange;
- (void)reset;
- (void)setUserConsent:(BOOL)a0;
- (id)appsInfo;
- (id)plansInfo;
- (id)usageInfo;
- (id)carrierAppInstallController;
- (id)descriptionForPlanMetrics:(id)a0;
- (BOOL)hasUserConsent;
- (id)localizedDataStringFromBytes:(unsigned long long)a0;
- (BOOL)planChangeIsRestricted;
- (id)planMetrics;
- (void)refreshAndReload;
- (id)subscribedDomesticPlanOptions;
- (id)subscribedPlanOptions;
- (BOOL)supportsSweetgum;
- (void)userConsentAcknowledged:(BOOL)a0;
- (id)userConsentFlowInfo;

@end
