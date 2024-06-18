@class NSSet, KGMemoryNode, NSDictionary, NSString;

@interface KGMemoryEdge : NSObject <KGEdge>

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (readonly, nonatomic) KGMemoryNode *targetNode;
@property (readonly, nonatomic) KGMemoryNode *sourceNode;
@property (copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resolveIdentifier:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)oppositeNodeFromNode:(id)a0;

@end