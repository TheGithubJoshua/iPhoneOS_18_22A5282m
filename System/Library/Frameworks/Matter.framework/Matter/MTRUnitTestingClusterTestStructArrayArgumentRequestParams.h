@class NSArray, NSNumber;

@interface MTRUnitTestingClusterTestStructArrayArgumentRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *arg1;
@property (copy, nonatomic) NSArray *arg2;
@property (copy, nonatomic) NSArray *arg3;
@property (copy, nonatomic) NSArray *arg4;
@property (copy, nonatomic) NSNumber *arg5;
@property (copy, nonatomic) NSNumber *arg6;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
