@class TSWPStorage;

@interface TSTTableDataFormulaError : TSTTableDataObject {
    TSWPStorage *mFormulaError;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithFormulaError:(id)a0;

@end
