@class NSMutableDictionary;

@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory> {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}

@property (retain, nonatomic) Class defaultNodeClass;
@property (retain, nonatomic) Class defaultEdgeClass;

- (id)init;
- (Class)classForNodeLabels:(id)a0;
- (void)registerEdgeClass:(Class)a0 forLabels:(id)a1;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;
- (id)_generateAllPossibleLabelSetsForLabels:(id)a0 labelSetsCache:(id)a1;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (Class)_selectClassFromPossibleLabels:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (Class)classForEdgeLabels:(id)a0;
- (void)registerNodeClass:(Class)a0 forLabels:(id)a1;

@end
