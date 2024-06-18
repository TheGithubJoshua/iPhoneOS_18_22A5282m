@class GDSpan, NSArray;

@interface GDRankerResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDSpan *span;
@property (readonly, copy, nonatomic) NSArray *rankedItems;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSpan:(id)a0 rankedItems:(id)a1;

@end
