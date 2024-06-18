@class EDCollection, EDReference;

@interface EDPivotArea : NSObject {
    BOOL mGrandCol;
    BOOL mGrandRow;
    BOOL mOutline;
    int mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (id)init;
- (void)setType:(int)a0;
- (void)setOffset:(id)a0;
- (id)offset;
- (id)references;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (BOOL)outline;
- (void)setOutline:(BOOL)a0;
- (BOOL)grandCol;
- (BOOL)grandRow;
- (void)setGrandCol:(BOOL)a0;
- (void)setGrandRow:(BOOL)a0;

@end
