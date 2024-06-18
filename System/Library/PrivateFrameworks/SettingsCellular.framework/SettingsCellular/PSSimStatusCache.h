@class NSMutableDictionary, NSString, CTXPCServiceSubscriptionInfo, CTXPCServiceSubscriptionContext, CoreTelephonyClient;

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate>

@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain) NSMutableDictionary *simStatusDict;
@property (retain) CTXPCServiceSubscriptionContext *currentDataSubscriptionContext;
@property (retain) CTXPCServiceSubscriptionContext *userDefaultVoiceSubscriptionContext;
@property (retain) NSMutableDictionary *simHardwareTypeDict;
@property (nonatomic) BOOL isAnySimPresent;
@property (readonly, nonatomic) BOOL isDualSimCapable;
@property (readonly, nonatomic) BOOL isSIMMissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)preferredDataSimChanged:(id)a0;
- (id)initPrivate;
- (void)currentDataSimChanged:(id)a0;
- (id)init;
- (void)fetchSubscriptionContexts;
- (void)willEnterForeground;
- (BOOL)isSlotActiveDataSlot:(long long)a0;
- (id)subscriptionsInUse;
- (void)subscriptionInfoDidChange;
- (id)getLogger;
- (long long)simHardwareInfo:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0;
- (void)fetchActiveDataSubscriptionContextIfNeeded;
- (void)clearSimHardwareInfoCache;
- (id)subscriptionContexts;
- (void).cxx_destruct;
- (void)fetchDefaultVoiceSubscriptionContextIfNeeded;
- (void)simStatusDidChange:(id)a0 status:(id)a1;
- (void)fetchSimHardwareInfo;
- (void)fetchSimStatus;
- (id)activeDataSubscriptionContext;
- (id)defaultVoiceSubscriptionContext;
- (id)simStatus:(id)a0;
- (void)updateIsAnySimPresent;
- (void)clearSubscriptionContextCache;

@end
