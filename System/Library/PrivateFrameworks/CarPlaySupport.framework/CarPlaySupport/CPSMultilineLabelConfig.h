@class NSString, UIFont, NSAttributedString;

@interface CPSMultilineLabelConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long lineCount;
@property (copy, nonatomic) NSAttributedString *attributedText;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToLabelConfig:(id)a0;

@end
