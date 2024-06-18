@class MTRUnitTestingClusterSimpleStruct, NSNumber;

@interface MTRUnitTestingClusterTestStructArgumentRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
