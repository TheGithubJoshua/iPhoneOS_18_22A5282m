@interface EDPivotFieldItem : NSObject {
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    unsigned long long mItemIndex;
}

+ (id)pivotFieldItem;

- (id)init;
- (void)setExpanded:(BOOL)a0;
- (void)setType:(int)a0;
- (BOOL)expanded;
- (id)description;
- (BOOL)hidden;
- (int)type;
- (void)setHidden:(BOOL)a0;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)a0;
- (BOOL)childItems;
- (void)setChildItems:(BOOL)a0;
- (BOOL)missed;
- (void)setMissed:(BOOL)a0;
- (BOOL)calculatedMember;
- (BOOL)detailsHidden;
- (void)setCalculatedMember:(BOOL)a0;
- (void)setDetailsHidden:(BOOL)a0;

@end
