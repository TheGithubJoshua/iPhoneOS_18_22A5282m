@class NSMutableArray, GVNode;

@interface GVEdge : NSObject

@property (retain, nonatomic) NSMutableArray *dummies;
@property (nonatomic) BOOL reversed;
@property (readonly, nonatomic) GVNode *from;
@property (readonly, nonatomic) GVNode *to;

- (id)init;
- (id)description;
- (void)dealloc;
- (id)initWithFromNode:(id)a0 to:(id)a1;

@end
