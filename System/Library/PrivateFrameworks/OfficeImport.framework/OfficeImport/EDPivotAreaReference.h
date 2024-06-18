@interface EDPivotAreaReference : NSObject {
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    unsigned long long mFieldId;
    unsigned long long mCount;
}

+ (id)pivotAreaReference;

- (id)init;
- (void)setCount:(unsigned long long)a0;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (id)description;
- (unsigned long long)count;
- (unsigned long long)fieldId;
- (void)setFieldId:(unsigned long long)a0;
- (BOOL)relative;
- (BOOL)byPosition;
- (void)setByPosition:(BOOL)a0;
- (void)setRelative:(BOOL)a0;

@end
