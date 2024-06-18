@class NSDictionary, NSAttributedString;

@interface TPSDiscoverabilityTip : TPSTip

@property (nonatomic, getter=isLocalContent) BOOL localContent;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSDictionary *preconditions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
