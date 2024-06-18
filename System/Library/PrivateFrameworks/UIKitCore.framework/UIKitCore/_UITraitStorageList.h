@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding>

@property (readonly, weak, nonatomic) id topLevelObject;
@property (readonly, nonatomic) NSArray *traitStorages;
@property (readonly, nonatomic) NSSet *descendants;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTopLevelObject:(id)a0 traitStorages:(id)a1 descendants:(id)a2;

@end
