@class EDCollection;

@interface EDPivotField : NSObject {
    int mAxis;
    BOOL mCompact;
    BOOL mDataField;
    BOOL mShowDefaultSubTotal;
    BOOL mInsertBlankRow;
    BOOL mOutlineItems;
    BOOL mShowAllItems;
    BOOL mSubtotalTop;
    unsigned long long mNumFmtId;
    EDCollection *mPivotFieldItems;
}

+ (id)pivotField;

- (void)setCompact:(BOOL)a0;
- (id)init;
- (BOOL)compact;
- (void)setAxis:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (int)axis;
- (void)setSubtotalTop:(BOOL)a0;
- (id)pivotFieldItems;
- (BOOL)dataField;
- (BOOL)insertBlankRow;
- (unsigned long long)numFmtId;
- (BOOL)outlineItems;
- (void)setDataField:(BOOL)a0;
- (void)setInsertBlankRow:(BOOL)a0;
- (void)setNumFmtId:(unsigned long long)a0;
- (void)setOutlineItems:(BOOL)a0;
- (void)setShowAllItems:(BOOL)a0;
- (void)setShowDefaultSubTotal:(BOOL)a0;
- (BOOL)showAllItems;
- (BOOL)showDefaultSubTotal;
- (BOOL)subtotalTop;

@end
