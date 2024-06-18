@class NSSet, UITraitCollection;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding>

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) NSSet *addedObjects;
@property (readonly, nonatomic) NSSet *removedObjects;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTraitCollection:(id)a0 addedObjects:(id)a1 removedObjects:(id)a2;

@end
