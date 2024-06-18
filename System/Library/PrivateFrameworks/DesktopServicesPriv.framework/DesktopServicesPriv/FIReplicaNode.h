@class FIDSNode;

@interface FIReplicaNode : FINode {
    FIDSNode *_node;
}

- (id)init:(id)a0;
- (id)original;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void *)asTNode;

@end
