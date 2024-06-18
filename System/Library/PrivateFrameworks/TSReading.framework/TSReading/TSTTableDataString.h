@class NSString;

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithString:(id)a0;

@end
