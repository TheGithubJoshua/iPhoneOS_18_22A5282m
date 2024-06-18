@class NSDate, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject, WiFiUsageLQMRollingWindow;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface WiFiUsageLQMWindowAnalysis : NSObject {
    NSMutableDictionary *dimensions;
}

@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) BOOL isDone;
@property (retain, nonatomic) NSDictionary *summary;
@property (retain, nonatomic) NSMutableArray *subsequentTriggers;
@property (nonatomic) NSString *firstSubsequentLinkDownReason;
@property (retain, nonatomic) NSArray *preceedingTriggers;
@property (retain, nonatomic) NSString *fgApp;
@property (nonatomic) BOOL inCall;
@property (nonatomic) unsigned long long diceRoll;
@property (nonatomic) BOOL hasKernel;
@property (retain, nonatomic) NSString *metricNameCDF;
@property (retain, nonatomic) NSString *metricNameSankey;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *analysisTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowBeforeTrigger;
@property (retain, nonatomic) WiFiUsageLQMRollingWindow *windowAfterTrigger;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSMutableDictionary *lqmWindowsFeatures;

+ (id)config;
+ (void)initialize;
+ (BOOL)isInCallAnalysisDue:(id)a0;
+ (void)updateConfig;
+ (unsigned long long)maxConcurrentAnalysis;
+ (unsigned long long)canCreateAnalysisFor:(id)a0;
+ (void)computeFeatures:(id)a0 For:(id)a1 WithLogLabel:(id)a2;
+ (BOOL)isKernerlParsingEnabled;

- (void)updateWithSubsequentTrigger:(id)a0;
- (id)dumpDimensions:(id)a0;
- (BOOL)isAnalysisTodo;
- (void)computeBins:(id)a0 WithSampleKind:(Class)a1;
- (void)performAnalysis;
- (id)fetchKernelLQMRollingWindowForInterface:(id)a0 into:(id)a1;
- (id)dumpAnalysis:(id)a0;
- (void)computeFeaturesFor:(id)a0 WithLogLabel:(id)a1;
- (id)addDimensionsTo:(id)a0;
- (BOOL)getBeforeKernelWindowWithLikelyhood;
- (id)initWithRollingWindow:(id)a0 andReason:(id)a1 andActiveCall:(BOOL)a2 andTimestamp:(id)a3 onQueue:(id)a4;
- (id)metricCallbackForMetric:(id)a0 AndField:(id)a1;
- (void)updateWithLQMSample:(id)a0;
- (BOOL)canSubmitToCA;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
