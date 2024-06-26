@class NSArray, CNGeminiChannel;

@interface CNGeminiResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CNGeminiChannel *channel;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) NSArray *availableChannels;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0 usage:(long long)a1 availableChannels:(id)a2;

@end
