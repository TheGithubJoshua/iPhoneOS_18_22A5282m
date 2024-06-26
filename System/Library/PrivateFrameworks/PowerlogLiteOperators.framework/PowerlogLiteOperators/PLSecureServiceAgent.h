@class PLXPCListenerOperatorComposition, PLTimer, NSString;

@interface PLSecureServiceAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *daemonLaunchListener;
@property (retain) PLXPCListenerOperatorComposition *connectionListener;
@property (retain) PLXPCListenerOperatorComposition *disconnectionListener;
@property (retain) PLXPCListenerOperatorComposition *deviceIntentListener;
@property (retain) PLXPCListenerOperatorComposition *periodicReportListener;
@property (retain) PLTimer *entriesPerHourTimer;
@property long long numBTConn;
@property long long periodicReportCount;
@property long long prevActiveKeys;
@property long long numEntries;
@property long long previousEvent;
@property (retain) NSString *previousHash;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionSummary;
+ (BOOL)isSecureServiceSupported;
+ (id)entryEventPointDefinitionConnectionState;

- (void)initOperatorDependancies;
- (id)init;
- (void)log;
- (void).cxx_destruct;
- (void)logEventPointPeriodicReport:(id)a0;
- (void)logEventPointConnectionState:(id)a0 withEvent:(long long)a1;

@end
