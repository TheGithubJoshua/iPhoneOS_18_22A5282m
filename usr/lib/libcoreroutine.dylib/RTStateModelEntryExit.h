@interface RTStateModelEntryExit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double entry_s;
@property (nonatomic) double exit_s;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithEntry:(double)a0 exit:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
