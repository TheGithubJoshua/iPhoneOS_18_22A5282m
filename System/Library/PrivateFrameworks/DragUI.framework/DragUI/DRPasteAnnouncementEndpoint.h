@class NSString;

@interface DRPasteAnnouncementEndpoint : NSObject <NSSecureCoding> {
    NSString *_localizedName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)_initWithLocalizedName:(id)a0;

@end
