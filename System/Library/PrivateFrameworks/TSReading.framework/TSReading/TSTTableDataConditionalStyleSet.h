@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithConditionalStyleSet:(id)a0;

@end
