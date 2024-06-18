@class NSArray;

@interface SearchUIMultiResultRowModel : SearchUIRowModel

@property (retain) NSArray *multiResults;

- (id)accessibilityIdentifier;
- (Class)collectionViewCellClass;
- (id)initWithResults:(id)a0;
- (id)dragAppBundleID;
- (BOOL)isDraggable;
- (long long)removeResult:(id)a0;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (BOOL)isTappable;
- (int)separatorStyle;
- (BOOL)isFocusable;
- (id)results;

@end
