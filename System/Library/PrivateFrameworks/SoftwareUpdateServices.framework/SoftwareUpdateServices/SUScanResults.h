@class SUDescriptor;

@interface SUScanResults : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUDescriptor *preferredDescriptor;
@property (retain, nonatomic) SUDescriptor *alternateDescriptor;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithPreferredDescriptor:(id)a0 alternateDescriptor:(id)a1;
- (id)latestUpdate;

@end
