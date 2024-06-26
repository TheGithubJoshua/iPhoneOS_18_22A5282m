@class NSString, NSURL, ICQLink;

@interface ICQInlineTipAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) ICQLink *link;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
