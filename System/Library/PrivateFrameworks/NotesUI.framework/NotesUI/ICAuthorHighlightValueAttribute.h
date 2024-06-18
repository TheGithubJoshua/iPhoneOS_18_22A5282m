@class UIColor;

@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying>

@property (nonatomic) double value;
@property (copy, nonatomic) UIColor *color;
@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
