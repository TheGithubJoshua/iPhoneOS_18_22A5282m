@class NSError;

@interface ATResponse : ATMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isPartial) BOOL partial;
@property (retain, nonatomic) NSError *error;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)additionalDescription;

@end
