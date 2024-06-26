@class NSUUID, PBRequest, NSString, NSDate, NSData, NSArray, NSDictionary, NSNumber;
@protocol DRSDecisionServerBatchRequest;

@interface DRSRequest : NSObject <DRSDSRequestObject>

@property (readonly, nonatomic) NSUUID *uniqueID;
@property (readonly, nonatomic) PBRequest *pbRequest;
@property (readonly, nonatomic) id<DRSDecisionServerBatchRequest> pbBatchInstance;
@property (readonly, nonatomic) Class pbBatchResponseClass;
@property (readonly, nonatomic) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long expectedType;
@property (retain, nonatomic) NSString *logPath;
@property (retain, nonatomic) NSString *logType;
@property (readonly, nonatomic) unsigned long long uploadID;
@property (retain, nonatomic) NSNumber *cachedLogSize;
@property (nonatomic) unsigned long long requestState;
@property (nonatomic) unsigned char decisionServerDecision;
@property (nonatomic) unsigned short uploadAttemptCount;
@property (nonatomic) BOOL hasBeenCountedByTelemetry;
@property (readonly, nonatomic) NSUUID *requestID;
@property (readonly, nonatomic) NSDate *requestDate;
@property (readonly, nonatomic) NSString *build;
@property (readonly, nonatomic) NSString *teamID;
@property (readonly, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) NSString *issueDescription;
@property (readonly, nonatomic) NSData *contextDictionaryData;
@property (readonly, nonatomic) NSDictionary *contextDictionary;
@property (readonly, nonatomic) unsigned long long requestMCT;
@property (readonly, nonatomic) NSString *requestType;
@property (readonly, nonatomic) NSNumber *logSize;
@property (readonly, nonatomic) NSArray *filePaths;
@property (readonly, nonatomic) NSArray *fileURLs;
@property (readonly, nonatomic) NSArray *fileNames;
@property (readonly, nonatomic) BOOL hasUploadableContent;
@property (readonly, nonatomic) NSString *requestStateString;
@property (readonly, nonatomic) unsigned char requestOutcome;
@property (readonly, nonatomic) NSString *requestOutcomeString;
@property (readonly, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) NSString *decisionServerDecisionString;
@property (readonly, nonatomic) NSString *ckRecordID;
@property (readonly, nonatomic) unsigned long long logSizeLimitBytes;
@property (readonly, nonatomic) BOOL isExpedited;

+ (id)entityName;
+ (id)requestsForFilterPredicate:(id)a0 context:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3 errorOut:(id *)a4;
+ (id)unreportedTerminalRequestsFromContext:(id)a0 sortDescriptors:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
+ (BOOL)isExpeditedTeamID:(id)a0 issueCategory:(id)a1;
+ (id)requestForMessage:(id)a0;
+ (unsigned long long)requestCountForFilterPredicate:(id)a0 context:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
+ (id)_requestWithRequestMO_ON_MOC_QUEUE:(id)a0;
+ (id)mostRecentDateFirstSortDescriptor;
+ (id)leastRecentDateFirstSortDescriptor;
+ (id)uploadedBytesSinceDate:(id)a0 context:(id)a1 errorOut:(id *)a2;
+ (BOOL)cleanRequestRecordsFromPersistentContainer:(id)a0 removeFiles:(BOOL)a1 removeRecord:(BOOL)a2 matchingPredicate:(id)a3 errorOut:(id *)a4;
+ (Class)_moClass;
+ (id)requiredSystemResourceName;

- (id)initWithXPCDict:(id)a0;
- (BOOL)uploadStarted;
- (id)targetContainerName;
- (BOOL)_updateLogFileStateForTransitionFromPreviousState:(unsigned long long)a0;
- (id)fileAssets;
- (id)protoRequestDescription;
- (id)replyForMessage:(id)a0;
- (void)uploadCompleteWithError:(id)a0 ckRecordID:(id)a1;
- (BOOL)isEqualToRequest:(id)a0;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (id)recordRepresentation;
- (id)uploadRequest;
- (void)uploadDeniedByDecisionServerWithReason:(id)a0;
- (void)uploadFailedDueToReason:(id)a0;
- (BOOL)_deleteLog;
- (BOOL)_updateLogStateToExpectedState:(unsigned char)a0;
- (id)protoFileDescription;
- (void)uploadAbortedDueToMissingLog;
- (BOOL)_markLogsAsPurgeableWithUrgencyWithDeleteFallback:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)uploadAbortedDueToLogSize;
- (void)_configureRequestMO:(id)a0;
- (void)updateContextWithRequest_ON_MOC_QUEUE:(id)a0;
- (id)newRequestMOInContext_ON_MOC_QUEUE:(id)a0;
- (id)_initWithRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;
- (BOOL)updateToState:(unsigned long long)a0 errorDescription:(id)a1 errorOut:(id *)a2;

@end
