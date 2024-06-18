@class EDCollection;

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)init;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (id)itemIndexes;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)a0;

@end
