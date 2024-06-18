@class NSMutableArray;

@interface ODDShape : ODDLayoutObject {
    int mType;
    int mPresetType;
    NSMutableArray *mAdjustments;
}

- (id)init;
- (void)setType:(int)a0;
- (int)presetType;
- (void).cxx_destruct;
- (id)description;
- (int)type;
- (id)adjustments;
- (void)addAdjustment:(id)a0;
- (void)setPresetType:(int)a0;

@end
