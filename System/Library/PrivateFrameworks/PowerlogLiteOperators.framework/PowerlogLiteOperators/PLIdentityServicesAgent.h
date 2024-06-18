@class NSMutableDictionary, NSString, PLXPCListenerOperatorComposition, NSDate, NRDeviceMonitor;

@interface PLIdentityServicesAgent : PLAgent <NRDeviceMonitorDelegate>

@property (retain) PLXPCListenerOperatorComposition *localMessageHandler;
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) PLXPCListenerOperatorComposition *idsLinkPreferenceRequestHandler;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;
@property (retain) NRDeviceMonitor *nrdm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventIntervalDefinitions;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventForwardDefinitions;

- (void)initOperatorDependancies;
- (id)init;
- (void)logIDSLinkPreference:(id)a0;
- (void)setCurrentLinkType;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)createIDSAccountingEventsWithEntries:(id)a0;
- (void)createBTAccountingEvents:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)deviceLinkTypeDidChange:(id)a0 linkType:(unsigned char)a1;
- (void)logIDSNetworkEntries:(id)a0;
- (void)logCloudMessaging:(id)a0;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)initTaskOperatorDependancies;
- (void)logLocalMessageTopic:(id)a0;

@end
