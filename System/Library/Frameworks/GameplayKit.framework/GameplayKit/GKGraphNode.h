@class NSArray, NSMutableArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {
    NSMutableArray *_connectedNodes;
    void *_cGraphNode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *connectedNodes;

+ (id)node;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)removeConnection:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)findPathToNode:(id)a0;
- (void)addConnection:(id)a0 bidirectional:(BOOL)a1;
- (void)addConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;
- (void *)cGraphNode;
- (float)costToNode:(id)a0;
- (void)deleteCGraphNode;
- (float)estimatedCostToNode:(id)a0;
- (id)findPathFromNode:(id)a0;
- (void *)makeCGraphNode;
- (id)mutConnectedNodes;
- (void)removeConnectionsToNodes:(id)a0 bidirectional:(BOOL)a1;

@end
