@class NSString;

@interface FCSolTagID : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isFavorited;
    BOOL _isAutoFavorited;
    BOOL _isGroupable;
    NSString *_identifier;
    unsigned long long _whitelistLevel;
    double _specificity;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
