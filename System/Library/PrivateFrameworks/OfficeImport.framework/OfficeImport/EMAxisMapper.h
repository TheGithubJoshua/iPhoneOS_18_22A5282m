@interface EMAxisMapper : CMMapper

- (id)labels;
- (float)strokeWidth;
- (float)unit;
- (struct CGColor { } *)textColor;
- (struct CGColor { } *)strokeColor;
- (id)values;
- (float)minValue;
- (id)label;
- (unsigned int)type;
- (id)position;
- (float)maxValue;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
