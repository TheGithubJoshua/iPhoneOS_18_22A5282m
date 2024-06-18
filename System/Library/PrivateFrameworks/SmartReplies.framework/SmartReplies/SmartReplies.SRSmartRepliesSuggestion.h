@class NSString;

@interface SmartReplies.SRSmartRepliesSuggestion : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ title;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isDynamicSuggestion;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;

@end
