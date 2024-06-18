@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *negativeItems;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithItems:(id)a0;
- (BOOL)isActive;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
