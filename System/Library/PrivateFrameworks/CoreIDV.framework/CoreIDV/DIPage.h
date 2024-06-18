@class NSString, NSDictionary, NSArray;

@interface DIPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSDictionary *serverValidationGroup;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) unsigned long long page;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAttributes:(id)a0 title:(id)a1 subTitle:(id)a2 page:(long long)a3;

@end
