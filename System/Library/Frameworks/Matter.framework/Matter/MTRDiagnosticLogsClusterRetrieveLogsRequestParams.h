@class NSNumber, NSData;

@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *intent;
@property (copy, nonatomic) NSNumber *requestedProtocol;
@property (copy, nonatomic) NSData *transferFileDesignator;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
