@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameGSML1State;

- (id)init;
- (void)setPayload:(id)a0;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1 andClientId:(id)a2;
- (void)logEventForwardGSML1StateWith:(id)a0;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2;
- (void)refreshBBEurekaEventMsgLite;
- (void)refreshUTRANRRCState;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2 andClientId:(id)a3;
- (void)setSDEventActionCodeWith:(id)a0 andSDAction:(id)a1 andSDState:(id)a2;
- (void)logEventPointCMExitCodeWithState:(id)a0;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2;
- (void).cxx_destruct;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventForwardSDEventActionCode;
- (void)sendAndLogPLEntry:(id)a0;
- (void)refreshEventNotProcessed;
- (void)appendToError:(id)a0;
- (void)refreshSDEventActionCode;
- (void)refreshWCDMARRCState;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1;
- (void)logEventForwardUTRANRRCNextStateAs:(id)a0 andCurrStateAs:(id)a1 andRateAs:(id)a2;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)a0 andCurrState:(id)a1 andRate:(id)a2;
- (void)refreshLTERRCState;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)setEventCode:(unsigned int)a0;
- (void)logEventNoneEventNotProcessed;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2 andClientId:(id)a3;
- (void)logEventForwardLTERRCStateAs:(id)a0;
- (void)setError:(id)a0;

@end
