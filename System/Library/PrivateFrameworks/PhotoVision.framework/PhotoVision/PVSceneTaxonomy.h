@class PFSceneTaxonomy, NSString, PVSceneTaxonomyNode;

@interface PVSceneTaxonomy : NSObject

@property (retain) PFSceneTaxonomy *taxonomy;
@property (readonly) PVSceneTaxonomyNode *rootNode;
@property (readonly, copy) NSString *sha256Hash;

+ (id)sharedTaxonomy;

- (id)init;
- (id)nodeForName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)nodeForSceneClassId:(unsigned int)a0;
- (id)initWithGraphURL:(id)a0 localizationBundle:(id)a1 tableName:(id)a2;

@end
