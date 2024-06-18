@class NSString, NSMutableSet;

@interface PFUbiquityToManyConflictDiff : NSObject {
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initForRelationshipAtKey:(id)a0;

@end
