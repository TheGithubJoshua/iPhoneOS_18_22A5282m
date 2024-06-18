@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait

@property (readonly, nonatomic) NSSet *items;
@property (readonly, nonatomic) NSSet *negativeItems;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithItems:(id)a0;
- (BOOL)isActive;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
