@class NSString, SFSearchResult;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult;

- (Class)collectionViewCellClass;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (BOOL)isTappable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)identifyingResult;
- (id)initWithSection:(id)a0 result:(id)a1;

@end
