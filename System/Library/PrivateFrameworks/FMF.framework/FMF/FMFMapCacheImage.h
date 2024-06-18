@class NSString, NSDate;

@interface FMFMapCacheImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long count;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDate *timestamp;

- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)boostPriority;

@end
