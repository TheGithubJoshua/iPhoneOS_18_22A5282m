@class NSString;

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (nonatomic) BOOL isInline;
@property (nonatomic) BOOL isHorizontalInLayout;
@property (copy, nonatomic) NSString *cardReuseIdentifier;
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) unsigned long long cornerMask;
@property (nonatomic) BOOL hasCustomCornerRounding;

- (id)accessibilityIdentifier;
- (Class)collectionViewCellClass;
- (BOOL)isDraggable;
- (id)reuseIdentifier;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (BOOL)isTappable;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)separatorStyle;
- (id)nextCard;
- (id)dragURL;
- (BOOL)hasLeadingImage;
- (BOOL)anyCardSectionsAreTappable:(id)a0;
- (BOOL)anyCardSectionsHaveNextCards:(id)a0;
- (id)dragSubtitle;
- (id)dragText;
- (id)dragTitle;
- (id)fallbackCardSectionForCompactResult;
- (BOOL)fillsBackgroundWithContent;
- (id)horizontalRowModel;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (BOOL)isQuerySuggestion;
- (BOOL)prefersNoSeparatorAbove;
- (id)punchouts;
- (BOOL)supportsCustomUserReportRequestAfforance;

@end
