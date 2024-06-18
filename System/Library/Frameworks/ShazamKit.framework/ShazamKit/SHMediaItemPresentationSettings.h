@interface SHMediaItemPresentationSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL openResultInBrowserOnFailure;

- (id)initWithCoder:(id)a0;
- (id)initWithSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
