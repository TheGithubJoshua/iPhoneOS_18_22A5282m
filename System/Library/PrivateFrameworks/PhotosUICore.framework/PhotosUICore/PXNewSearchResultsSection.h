@class NSArray, NSDictionary, NSString;

@interface PXNewSearchResultsSection : NSObject

@property (copy, nonatomic) NSArray *visibleResultIdentifiers;
@property (copy, nonatomic) NSDictionary *identifierToResultMap;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly, nonatomic) BOOL isExpandable;
@property (readonly, nonatomic) NSArray *results;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)_sortOrder;
- (id)_stringForType:(unsigned long long)a0;
- (void)_updateVisibleResultIdentifiers;
- (unsigned long long)_collapsedVisibleResultCount;
- (unsigned long long)_expandedVisibleResultCount;
- (id)_identifierToResultMapWithResults:(id)a0;
- (id)_identifiersForResults:(id)a0;
- (id)_titleForSectionType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 results:(id)a1;
- (id)searchResultForIdentifier:(id)a0;

@end