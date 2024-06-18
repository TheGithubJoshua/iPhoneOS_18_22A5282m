@class NSArray;

@interface SmartReplies.SRSmartRepliesSuggestionResponse : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSArray *suggestions;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)initWithSuggestions:(id)a0;

@end
