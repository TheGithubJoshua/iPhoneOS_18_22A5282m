@interface WLImportContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long importCount;
@property (nonatomic) unsigned long long importErrorCount;
@property (nonatomic) unsigned long long size;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
