@class NSString;

@interface SmartReplies.SRSmartRepliesCaption : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ caption;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *caption;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithCaption:(id)a0 type:(long long)a1;

@end
