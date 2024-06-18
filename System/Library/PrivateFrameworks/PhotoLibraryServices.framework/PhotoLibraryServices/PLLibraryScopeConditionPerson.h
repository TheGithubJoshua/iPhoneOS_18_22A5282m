@class NSArray;

@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition

@property (copy, nonatomic) NSArray *personUUIDs;

+ (id)conditionWithSingleQueries:(id)a0 criteria:(unsigned char)a1;
+ (BOOL)supportsQueryKey:(int)a0;

- (void).cxx_destruct;
- (id)description;
- (unsigned char)type;
- (id)conditionQuery;
- (BOOL)removePersonUUID:(id)a0;
- (BOOL)replaceTombstonePersonUUID:(id)a0 withPersonUUID:(id)a1;

@end
