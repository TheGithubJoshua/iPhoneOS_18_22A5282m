@class NSURL, LPLinkMetadata;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) LPLinkMetadata *_linkMetadata;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
