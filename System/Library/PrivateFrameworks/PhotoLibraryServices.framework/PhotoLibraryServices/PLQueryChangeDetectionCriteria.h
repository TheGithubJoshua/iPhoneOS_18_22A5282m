@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject {
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;
}

@property (readonly) BOOL isEmpty;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)enumerateEntitiesAndAttributesUsingBlock:(id /* block */)a0;
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(id /* block */)a0;
- (void)addAttributeKeyPath:(id)a0 forEntityName:(id)a1;
- (void)addRelationshipKeyPath:(id)a0 forEntityName:(id)a1;

@end
