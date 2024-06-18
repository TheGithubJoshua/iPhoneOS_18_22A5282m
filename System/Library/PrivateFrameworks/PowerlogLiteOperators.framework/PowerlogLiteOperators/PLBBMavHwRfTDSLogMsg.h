@class NSString, NSMutableDictionary, NSArray, NSNumber;

@interface PLBBMavHwRfTDSLogMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSArray *srvcTypeCnt;
@property (retain) NSArray *rxdStateCnt;

+ (id)entryEventBackwardDefinitionBBMavHwRfTDS;

- (id)init;
- (void)populateEntry:(id)a0;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (void)refreshRequest;
- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (id)logEventBackwardBBMavHwRfTDS;

@end
