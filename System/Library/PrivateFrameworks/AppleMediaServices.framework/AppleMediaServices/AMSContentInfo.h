@class NSString, NSDate;

@interface AMSContentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *expires;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *version;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
