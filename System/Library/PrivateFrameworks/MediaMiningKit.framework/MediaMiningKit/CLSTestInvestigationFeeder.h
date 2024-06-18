@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (unsigned long long)numberOfItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)localStartDate;
- (id)localEndDate;
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

@end
