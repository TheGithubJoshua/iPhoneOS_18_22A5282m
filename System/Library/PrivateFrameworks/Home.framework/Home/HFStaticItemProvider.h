@class NSSet;

@interface HFStaticItemProvider : HFItemProvider

@property (retain, nonatomic) NSSet *staticItems;
@property (nonatomic) BOOL hasProvidedItems;

- (id)items;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0 items:(id)a1;

@end
