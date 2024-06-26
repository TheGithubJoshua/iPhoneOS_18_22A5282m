@class NSString;

@interface BBAssociationSet : NSObject {
    NSString *_associationSetKey;
    unsigned long long _associatedObjectMemoryPointerFunction;
}

+ (id)setWithWeakAssociation;
+ (id)setWithStrongAssociation;

- (void)copyAssociationsForObject:(id)a0 toObject:(id)a1;
- (id)associatedObjectsForObject:(id)a0;
- (void).cxx_destruct;
- (id)_initWithMemoryPointerFunction:(unsigned long long)a0;
- (void)associateObject:(id)a0 withObject:(id)a1;

@end
