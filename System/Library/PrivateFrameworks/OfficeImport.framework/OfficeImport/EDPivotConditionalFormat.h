@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    unsigned long long mPriority;
    int mType;
    int mScope;
    EDCollection *mPivotAreas;
}

+ (id)pivotConditionalFormat;

- (void)setScope:(int)a0;
- (void)setPriority:(unsigned long long)a0;
- (id)init;
- (void)setType:(int)a0;
- (int)scope;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (unsigned long long)priority;
- (id)pivotAreas;

@end
