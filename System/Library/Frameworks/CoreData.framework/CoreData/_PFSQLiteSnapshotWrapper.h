@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying> {
    struct sqlite3_snapshot { unsigned char x0[48]; } *_s;
    int _externalReferences;
    int _flags;
}

@property (readonly, nonatomic) const void *bytes;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopy;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
