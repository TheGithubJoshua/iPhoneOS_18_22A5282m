@class NSString, NSDictionary;

@interface BMContextualActionContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSDictionary *contentMetadata;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 metadata:(id)a1;

@end
