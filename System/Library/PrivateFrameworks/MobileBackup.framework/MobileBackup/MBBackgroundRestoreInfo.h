@class NSArray;

@interface MBBackgroundRestoreInfo : NSObject <NSSecureCoding, NSCopying> {
    int dataClassesRemaining;
    unsigned long long bytesRemaining;
    NSArray *failedDomains;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property int dataClassesRemaining;
@property unsigned long long bytesRemaining;
@property (retain) NSArray *failedDomains;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
