@class NSArray, NSDate;

@interface TRITaskRunResult : NSObject <NSCopying>

@property (readonly, nonatomic) int runStatus;
@property (readonly, nonatomic) BOOL reportResultToServer;
@property (readonly, nonatomic) NSArray *nextTasks;
@property (readonly, nonatomic) NSDate *earliestRetryDate;

+ (id)resultWithRunStatus:(int)a0 reportResultToServer:(BOOL)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;

- (id)init;
- (id)copyWithReplacementEarliestRetryDate:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementReportResultToServer:(BOOL)a0;
- (BOOL)isEqualToResult:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementRunStatus:(int)a0;
- (id)copyWithReplacementNextTasks:(id)a0;
- (id)initWithRunStatus:(int)a0 reportResultToServer:(BOOL)a1 nextTasks:(id)a2 earliestRetryDate:(id)a3;

@end
