@class NSMutableArray;

@interface OADTableGrid : NSObject {
    NSMutableArray *mColumns;
}

- (id)init;
- (unsigned long long)columnCount;
- (void).cxx_destruct;
- (id)description;
- (id)columnAtIndex:(unsigned long long)a0;
- (id)addColumn;
- (void)flipColumnsRTL;

@end
