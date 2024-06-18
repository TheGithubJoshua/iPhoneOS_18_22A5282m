@class ICQTipIcon, NSString, NSArray, NSURL;

@interface ICQTipInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSURL *dismissURL;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) ICQTipIcon *icon;

- (id)initWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_parseTipIcon:(id)a0;

@end