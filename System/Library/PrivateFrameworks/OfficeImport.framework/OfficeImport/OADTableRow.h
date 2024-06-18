@class NSMutableArray;

@interface OADTableRow : NSObject {
    NSMutableArray *mCells;
    float mHeight;
}

- (id)init;
- (float)height;
- (void)setHeight:(float)a0;
- (void).cxx_destruct;
- (id)description;
- (id)cellAtIndex:(unsigned long long)a0;
- (unsigned long long)cellCount;
- (id)addCell;
- (void)flipCellsRTL;

@end
