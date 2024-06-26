@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}

- (unsigned long long)rowCount;
- (int)nestingLevel;
- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)a0;
- (id)properties;
- (id)rowAt:(unsigned long long)a0;
- (void)clearProperties;
- (id)insertRowAtIndex:(unsigned long long)a0;
- (void)clearRows;
- (id)newCellIterator;
- (id)addRow;
- (int)blockType;
- (id)cellIterator;
- (id)newRowIterator;
- (id)newRunIterator;
- (id)rowIterator;
- (id)runIterator;

@end
