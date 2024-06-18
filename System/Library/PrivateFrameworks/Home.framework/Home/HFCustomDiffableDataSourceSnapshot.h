@class NSArray;

@interface HFCustomDiffableDataSourceSnapshot : NSObject

@property (retain, nonatomic) NSArray *sections;

- (long long)numberOfItems;
- (id)sectionIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)itemIdentifiers;
- (long long)numberOfSections;
- (void).cxx_destruct;

@end
