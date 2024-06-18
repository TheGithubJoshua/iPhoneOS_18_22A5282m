@class NSArray, NSMutableArray, NSString;

@interface AVCustomStackLayout : NSObject

@property (retain, nonatomic) NSArray *rowHeads;
@property (retain, nonatomic) NSMutableArray *rowSpacing;
@property (copy, nonatomic) NSString *debugIdentifier;

- (id)init;
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)a0;
- (double)_heightForRow:(unsigned long long)a0 startingFrom:(id)a1 inBoundingSize:(struct CGSize { double x0; double x1; })a2;
- (id)itemsThatFitSize:(struct CGSize { double x0; double x1; })a0;
- (id)_lastVisibleLayoutItemAttributesFrom:(id)a0;
- (void).cxx_destruct;
- (id)prioritizedSizeThatFitsSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithLayoutRowHeads:(id)a0;
- (id)_flexibleWidthMapForLayoutItemsBeginningWithLayoutItem:(id)a0 endingWithItem:(id)a1 withAvailableSize:(struct CGSize { double x0; double x1; })a2;
- (id)layoutFramesInBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setRowSpacing:(double)a0 afterRow:(unsigned long long)a1;

@end
