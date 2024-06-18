@interface EMSeriesMapper : CMMapper

- (float)strokeWidth;
- (struct CGColor { } *)strokeColor;
- (id)values;
- (float)offset;
- (struct CGColor { } *)fillColor;
- (float)markerWidth;
- (struct CGColor { } *)markerColor;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;

@end
