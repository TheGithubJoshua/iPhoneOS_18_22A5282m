@class NSURL;

@interface ICQImageURL : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *URL1x;
@property (retain, nonatomic) NSURL *URL2x;
@property (retain, nonatomic) NSURL *URL3x;

- (id)initWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
