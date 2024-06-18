@class NSString;

@interface DRSSubmitLogRequest : DRSRequest

@property (readonly, nonatomic) NSString *sandboxExtension;
@property (readonly, nonatomic) BOOL transferOwnership;

+ (id)entityName;
+ (Class)_moClass;

- (id)initWithXPCDict:(id)a0;
- (id)replyForMessage:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (BOOL)performOnReceiptWork:(id)a0 dampeningOutcome:(unsigned long long)a1;
- (id)_initWithSubmitLogRequestMO_ON_MOC_QUEUE:(id)a0;
- (id)requestType;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (void)_configureRequestMO:(id)a0;

@end
