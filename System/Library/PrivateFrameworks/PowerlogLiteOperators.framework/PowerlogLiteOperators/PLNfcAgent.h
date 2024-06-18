@class PLTimer, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition;

@interface PLNfcAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cardNotification;
@property (retain) PLXPCListenerOperatorComposition *fieldNotification;
@property (retain) PLXPCListenerOperatorComposition *transactionNotification;
@property (retain) PLXPCListenerOperatorComposition *tsmCommunicationNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcPowerCountersNotification;
@property (retain) PLEntryNotificationOperatorComposition *nfcAccessoryPowerCounterNotification;
@property double onPower;
@property (retain) NSDate *lastPowerCountersLogTime;
@property (retain) NSDate *lastAccessoryPowerCountersLogTime;
@property (retain) PLTimer *nfcConnectionRetryTimer;
@property int nfcConnectionRetryCount;

+ (void)load;
+ (id)defaults;
+ (id)parseLPEMFromData:(id)a0;
+ (id)entryEventForwardDefinitionTSMCommunication;
+ (id)entryEventIntervalDefinitionPower;
+ (id)entryEventForwardDefinitionTransaction;
+ (id)entryEventForwardDefinitionLPEM;
+ (id)entryEventForwardDefinitionCard;
+ (id)entryEventForwardDefinitionField;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionAccessoryPower;

- (void)initOperatorDependancies;
- (id)init;
- (void)setupNfcAccessoryPowerCounterRetrieval;
- (void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)a0;
- (void)fieldChangedWithEntry:(id)a0;
- (void)setupLPEMCounter;
- (void).cxx_destruct;
- (void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)a0;
- (void)logEventForwardLPEM;
- (void)initTaskOperatorDependancies;
- (unsigned int)getNFCHarwareState;
- (void)setUpNfcPowerCounterRetrieval;

@end
