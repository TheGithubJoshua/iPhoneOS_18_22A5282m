@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *itemString;
@property (readonly, nonatomic) unsigned int itemFeedbackType;

+ (id)stringForItemFeedbackType:(unsigned int)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEqualToPPFeedbackItem:(id)a0;
- (unsigned long long)hash;
- (id)initWithItemString:(id)a0 itemFeedbackType:(unsigned int)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
