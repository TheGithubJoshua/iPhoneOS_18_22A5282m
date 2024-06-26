@class NSMutableArray, KGMutableElementIdentifierSet;

@interface KGGraphChangeRequest : NSObject

@property (retain, nonatomic) NSMutableArray *nodesToInsert;
@property (retain, nonatomic) NSMutableArray *edgesToInsert;
@property (retain, nonatomic) NSMutableArray *nodeUpdates;
@property (retain, nonatomic) NSMutableArray *edgeUpdates;
@property (retain, nonatomic) KGMutableElementIdentifierSet *nodeIdentifiersToRemove;
@property (retain, nonatomic) KGMutableElementIdentifierSet *edgeIdentifiersToRemove;
@property (readonly, nonatomic) unsigned long long count;

- (void)removeNode:(id)a0;
- (id)init;
- (void)removeEdge:(id)a0;
- (void)insertNode:(id)a0;
- (void).cxx_destruct;
- (void)insertEdge:(id)a0;
- (void)removeEdgesForIdentifiers:(id)a0;
- (void)removeNodesForIdentifiers:(id)a0;
- (void)setResolved;
- (void)updateEdge:(id)a0 newProperties:(id)a1;
- (void)updateNode:(id)a0 newProperties:(id)a1;

@end
