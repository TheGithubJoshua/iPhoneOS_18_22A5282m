@class _TtC18VisualIntelligence23OntologyGraphCompatible;

@interface VIOntologyGraph : NSObject {
    _TtC18VisualIntelligence23OntologyGraphCompatible *_compatGraph;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)findLeastCommonAncestorWithNode1:(id)a0 node2:(id)a1;
- (id)initWithOntologyGraph:(id)a0;
- (BOOL)isDescendentWithDescendent:(id)a0 ancestor:(id)a1;
- (id)ontologyNodeWithKnowledgeGraphID:(id)a0;

@end
