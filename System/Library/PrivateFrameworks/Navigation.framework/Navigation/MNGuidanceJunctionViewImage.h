@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long imageID;
@property (readonly, nonatomic) NSData *imageData;

- (id)initWithCoder:(id)a0;
- (void)setImageData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImageID:(unsigned long long)a0;

@end
