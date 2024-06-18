@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long category;
@property (nonatomic) unsigned char index;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) int ear;
@property (nonatomic) int syncAttempts;

- (id)initWithCoder:(id)a0;
- (id)initWithRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isMixingStream;
- (BOOL)isStream;
- (BOOL)isStreamOrMixingStream;
- (id)transportRepresentation;

@end
