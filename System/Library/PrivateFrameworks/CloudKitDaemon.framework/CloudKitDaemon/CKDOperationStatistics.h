@class NSString, NSMutableDictionary, CKDOperationMetrics;

@interface CKDOperationStatistics : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *operationClassName;
@property (readonly, nonatomic) NSMutableDictionary *recentErrorsByDate;
@property (readonly) unsigned long long operationCount;
@property (readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics;
@property (readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics;

- (id)CKStatusReportArray;
- (id)initWithOperationClassName:(id)a0;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)_addMetrics:(id)a0 toAggregate:(id)a1;
- (void)merge:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_trimmedError:(id)a0;

@end
