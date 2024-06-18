@class NSString, NSArray;

@interface WFChooseFromMenuItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *synonyms;
@property (readonly, nonatomic) NSString *subtitle;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 synonyms:(id)a1 subtitle:(id)a2;

@end