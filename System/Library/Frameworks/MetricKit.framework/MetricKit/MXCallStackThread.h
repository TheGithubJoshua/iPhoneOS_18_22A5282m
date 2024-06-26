@class NSArray;

@interface MXCallStackThread : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL attributedThread;
@property (readonly) NSArray *topFrames;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithTopCallStackFrames:(id)a0 isAttributedThread:(BOOL)a1;

@end
