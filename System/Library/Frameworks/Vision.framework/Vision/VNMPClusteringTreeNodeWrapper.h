@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (id)left;
- (float)distance;
- (id)right;
- (id)descriptor;
- (void)dealloc;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (float)avgDistance;
- (id)getLeafNodes;
- (int)leafsCount;
- (int)nodeId;

@end
