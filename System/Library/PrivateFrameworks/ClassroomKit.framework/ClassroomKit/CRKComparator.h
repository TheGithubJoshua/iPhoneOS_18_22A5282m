@class NSMutableArray;

@interface CRKComparator : NSObject

@property (readonly, nonatomic) NSMutableArray *allCriteria;

+ (id /* block */)compare;
+ (id)compareWithCriteria:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)run;
- (id /* block */)compare;
- (id)compareWithCriteria:(id /* block */)a0;
- (long long)runComparison;

@end
