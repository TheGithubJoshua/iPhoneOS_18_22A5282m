@class TSTPopUpMenuModel;

@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel *mPopUpMenuModel;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initObjectWithPopUpMenuModel:(id)a0;

@end
