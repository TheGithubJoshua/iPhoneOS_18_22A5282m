@class TSDCommentStorage;

@interface TSTTableDataCommentStorage : TSTTableDataObject {
    TSDCommentStorage *mCommentStorage;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithCommentStorage:(id)a0;

@end
