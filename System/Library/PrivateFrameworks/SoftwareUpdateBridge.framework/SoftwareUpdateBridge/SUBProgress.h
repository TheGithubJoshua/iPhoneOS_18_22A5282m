@class NSString;

@interface SUBProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *phase;
@property (nonatomic) float portionComplete;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) BOOL isDone;

- (id)initWithCoder:(id)a0;
- (id)copy;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
