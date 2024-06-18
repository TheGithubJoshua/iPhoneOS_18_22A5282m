@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (void)setValue:(double)a0;
- (id)description;
- (double)value;

@end
