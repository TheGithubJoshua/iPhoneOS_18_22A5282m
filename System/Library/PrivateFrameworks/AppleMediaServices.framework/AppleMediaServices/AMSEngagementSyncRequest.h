@class NSArray, NSDictionary, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *apps;
@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
