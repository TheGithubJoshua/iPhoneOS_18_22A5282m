@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (void)setScale:(int)a0;
- (int)operatorType;
- (void)setValue:(double)a0;
- (id)description;
- (int)scale;
- (double)value;
- (void)setOperatorType:(int)a0;
- (double)filterValue;
- (void)setFilterValue:(double)a0;

@end
