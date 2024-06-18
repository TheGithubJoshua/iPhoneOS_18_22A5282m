@class NSArray;

@interface PXCNRecipientSearchDataSource : PXRecipientSearchDataSource {
    NSArray *_searchResults;
}

- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (id)initWithSearchResults:(id)a0;

@end
