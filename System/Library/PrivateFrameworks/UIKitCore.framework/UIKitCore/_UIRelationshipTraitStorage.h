@class NSOrderedSet;

@interface _UIRelationshipTraitStorage : _UITraitStorage {
    NSOrderedSet *_relationshipCandidates;
}

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)addRecordWithTraitCollection:(id)a0 addedObjects:(id)a1 removedObjects:(id)a2;
- (void)applyRecordsMatchingTraitCollection:(id)a0;
- (id)initWithObject:(id)a0 keyPath:(id)a1 relationshipCandidates:(id)a2;

@end
