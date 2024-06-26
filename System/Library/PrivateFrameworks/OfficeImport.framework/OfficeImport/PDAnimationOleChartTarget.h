@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}

- (void)setLevel:(int)a0;
- (id)init;
- (int)level;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;

@end
