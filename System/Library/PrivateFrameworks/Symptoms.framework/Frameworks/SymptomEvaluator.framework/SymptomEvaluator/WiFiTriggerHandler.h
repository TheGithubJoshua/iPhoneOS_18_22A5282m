@class ManagedEventHandler, NSString, NSArray, DecisionDetails, NSDate, DataStallHandler;

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate> {
    NSString *_syndromeName;
    char *_syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
    double _lastReportTime;
    NSString *_baseName;
    float _baseRTTAvg;
    float _baseRTTVar;
    float _baseRTTMin;
    float _newRTTAvg;
    float _newRTTVar;
    NSDate *_RTTTimestamp;
    id _wifiEpochObserver;
    id _cellEpochObserver;
    id _primaryInterfaceObserver;
    DecisionDetails *_detailsAwaitingRefuter;
    NSArray *_baselineDefaultRouteData;
    NSDate *_baselineDefaultRouteTimestamp;
    int _refuterAcitvationId;
    long long _lastRefutePeriodTraffic;
    double _lastRefutePeriodDuration;
    NSDate *_lastRefutePeriodTimestamp;
    DataStallHandler *_dataStallHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNetScoreInfo;
+ (id)sharedInstance;
+ (void)initialize;
+ (void)triggerAllowedByRSSI:(BOOL)a0 receiptTimestamp:(id)a1;
+ (id)getHandlerByName:(id)a0;
+ (void)_triggerAllowedByRSSI:(BOOL)a0 receiptTimestamp:(id)a1;
+ (id)configureClass:(id)a0;

- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (BOOL)noteSymptom:(id)a0;
- (void)refuteStage:(id)a0;
- (void)_reset;
- (id)init;
- (long long)_getDataStallsScore;
- (id)_getAWDInfo:(id)a0;
- (void).cxx_destruct;
- (void)dampeningStage:(id)a0;
- (long long)_getARPFailureCount;
- (void)didReceiveSyndrome:(id)a0;
- (int)combineScoreARP:(int)a0 ND6:(int)a1 DNS:(int)a2 RTT:(int)a3 flows:(int)a4;
- (int)_impactFromFlags:(unsigned int)a0 andFlows:(unsigned long long)a1;
- (BOOL)insufficientRxTrafficDetectedFrom:(id)a0 atTime:(id)a1 To:(id)a2;
- (id)_getND6Info;
- (long long)_getND6FailureCount;
- (id)_getNetScoreInfo;
- (void)checkUniqueStallCountOnInterfaceType:(long long)a0 stallType:(unsigned long long)a1;
- (id)_getARPInfo;
- (id)_getDNSInfo;

@end
