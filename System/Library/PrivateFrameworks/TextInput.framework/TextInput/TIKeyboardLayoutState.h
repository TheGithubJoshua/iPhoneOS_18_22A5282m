@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *inputMode;
@property (readonly, nonatomic) NSString *softwareLayout;
@property (nonatomic) BOOL hasCandidateKey;
@property (nonatomic) BOOL hasAccentKey;
@property (nonatomic) BOOL canMultitap;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic) BOOL isKanaPlane;
@property (nonatomic) BOOL diacriticForwardCompose;
@property (copy, nonatomic) NSString *layoutTag;
@property (nonatomic) long long userInterfaceIdiom;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end