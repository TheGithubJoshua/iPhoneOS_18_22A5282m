@class NSNumber, UIColor;

@interface ICAuthorHighlightValue : NSObject

@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
