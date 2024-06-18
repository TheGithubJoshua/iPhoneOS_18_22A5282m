@interface TSTTableDataCustomFormat : TSTTableDataObject {
    void *mCustomFormat;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithCustomFormat:(void *)a0;

@end
