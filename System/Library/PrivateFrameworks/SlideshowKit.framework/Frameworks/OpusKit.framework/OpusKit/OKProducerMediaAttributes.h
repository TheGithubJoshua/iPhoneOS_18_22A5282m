@class NSString, NSAttributedString;

@interface OKProducerMediaAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) double scale;
@property (nonatomic) struct CGPoint { double x; double y; } offset2;
@property (nonatomic) double scale2;

- (void)clearText;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)hasText;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)updateWithText:(id)a0;

@end
