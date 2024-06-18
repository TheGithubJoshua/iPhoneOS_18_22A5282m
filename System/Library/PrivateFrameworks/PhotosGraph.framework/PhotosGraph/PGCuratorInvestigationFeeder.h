@class NSArray;

@interface PGCuratorInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)allItems;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)initWithItems:(id)a0;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;
- (id)privateItems;
- (id)sharedItems;

@end
