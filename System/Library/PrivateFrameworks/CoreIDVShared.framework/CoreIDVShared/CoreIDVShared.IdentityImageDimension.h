@class NSString;

@interface CoreIDVShared.IdentityImageDimension : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ width;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;

@end
