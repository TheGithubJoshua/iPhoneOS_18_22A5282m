@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;

- (id)pop;
- (id)init;
- (id)peek;
- (void)push:(id)a0;
- (void)removeAll;
- (void).cxx_destruct;
- (void)_dumpQueue;

@end
