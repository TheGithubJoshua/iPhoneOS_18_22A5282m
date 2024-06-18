@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithStyle:(id)a0;

@end
