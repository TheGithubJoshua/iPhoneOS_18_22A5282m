@class NSArray;

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels;

- (id)cardSection;
- (Class)collectionViewCellClass;
- (BOOL)isDraggable;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (BOOL)isTappable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)separatorStyle;
- (id)nextCard;
- (id)dragURL;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)firstRowModel;
- (id)initWithResult:(id)a0 cardSectionRowModels:(id)a1;
- (id)punchouts;

@end
