@class NSURL, NSString;

@interface _BlastDoorLPImageMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int version;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSString *accessibilityText;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
