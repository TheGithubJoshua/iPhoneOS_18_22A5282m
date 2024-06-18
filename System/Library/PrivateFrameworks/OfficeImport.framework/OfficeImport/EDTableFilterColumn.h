@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)init;
- (id)filterAtIndex:(unsigned long long)a0;
- (unsigned long long)filterCount;
- (void)addFilter:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnIndex;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)a0;

@end
