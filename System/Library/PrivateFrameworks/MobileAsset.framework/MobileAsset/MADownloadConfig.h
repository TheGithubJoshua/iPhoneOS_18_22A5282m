@interface MADownloadConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL discretionary;

- (id)initWithPlist:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encodeAsPlist;
- (id)init;
- (void)logConfig;
- (void)encodeWithCoder:(id)a0;
- (id)summary;

@end
