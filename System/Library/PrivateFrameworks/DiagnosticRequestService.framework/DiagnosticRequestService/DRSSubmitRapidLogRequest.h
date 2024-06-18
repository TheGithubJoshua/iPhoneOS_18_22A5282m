@class NSNumber, NSString, NSData;

@interface DRSSubmitRapidLogRequest : DRSSubmitLogRequest

@property (retain, nonatomic) NSNumber *cfDidSucceed;
@property (retain, nonatomic) NSString *cfFailureReason;
@property (retain, nonatomic) NSData *cfReplyPayload;

+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (id)targetContainerName;
- (BOOL)isEqualToRequest:(id)a0;
- (id)requestType;
- (void).cxx_destruct;
- (id)_initWithSubmitRapidLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)debugDescription;
- (unsigned long long)logSizeLimitBytes;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(BOOL)a0;

@end
