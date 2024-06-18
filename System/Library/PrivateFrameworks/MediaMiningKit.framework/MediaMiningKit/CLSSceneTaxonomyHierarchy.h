@class PFSceneTaxonomy;

@interface CLSSceneTaxonomyHierarchy : NSObject {
    PFSceneTaxonomy *_sceneTaxonomy;
}

- (id)nodeForIdentifier:(unsigned int)a0;
- (id)init;
- (BOOL)nodeExistsForName:(id)a0;
- (id)nodeForName:(id)a0;
- (id)rootNode;
- (void).cxx_destruct;

@end
