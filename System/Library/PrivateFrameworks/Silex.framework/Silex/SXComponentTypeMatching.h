@class NSMutableArray;

@interface SXComponentTypeMatching : NSObject

@property (readonly, nonatomic) NSMutableArray *descriptions;

- (id)init;
- (id)match:(id)a0;
- (void).cxx_destruct;
- (void)addDescription:(id)a0;
- (void)removeDescription:(id)a0;

@end
